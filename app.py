from flask import Flask, render_template, request, jsonify
import os
import subprocess
import uuid
from werkzeug.utils import secure_filename

app = Flask(__name__)
app.config['CODES_FOLDER'] = 'codes'
app.config['MAX_EXECUTION_TIME'] = 5  # seconds

# Ensure codes directory exists
os.makedirs(app.config['CODES_FOLDER'], exist_ok=True)

@app.route('/')
def index():
    files = sorted([f for f in os.listdir(app.config['CODES_FOLDER']) 
                   if f.endswith('.c')])
    return render_template("index.html", files=files)

@app.route('/load_code', methods=['POST'])
def load_code():
    filename = secure_filename(request.json['filename'])
    filepath = os.path.join(app.config['CODES_FOLDER'], filename)
    
    if not os.path.exists(filepath):
        return jsonify({'error': 'File not found'}), 404
    
    with open(filepath, 'r') as f:
        code = f.read()
    
    return jsonify({
        'code': code,
        'filename': filename
    })

@app.route('/run_code', methods=['POST'])
def run_code():
    # Security checks
    filename = secure_filename(request.json['filename'])
    input_data = request.json.get('input', '')
    
    if not filename.endswith('.c'):
        return jsonify({'error': 'Invalid file type'}), 400
    
    filepath = os.path.join(app.config['CODES_FOLDER'], filename)
    if not os.path.exists(filepath):
        return jsonify({'error': 'File not found'}), 404
    
    # Create unique executable name for security
    unique_id = str(uuid.uuid4())[:8]
    exe_path = os.path.join(app.config['CODES_FOLDER'], f"out_{unique_id}")
    
    try:
        # Compile
        compile_result = subprocess.run(
            ["gcc", filepath, "-o", exe_path],
            capture_output=True,
            text=True,
            timeout=app.config['MAX_EXECUTION_TIME']
        )
        
        if compile_result.returncode != 0:
            return jsonify({
                'output': '',
                'error': compile_result.stderr
            })
        
        # Execute
        run_result = subprocess.run(
            [exe_path],
            input=input_data,
            capture_output=True,
            text=True,
            timeout=app.config['MAX_EXECUTION_TIME']
        )
        
        output = run_result.stdout
        error = run_result.stderr
        
    except subprocess.TimeoutExpired:
        return jsonify({
            'output': '',
            'error': f'Execution timed out (> {app.config["MAX_EXECUTION_TIME"]}s)'
        })
    except Exception as e:
        return jsonify({
            'output': '',
            'error': str(e)
        })
    finally:
        # Clean up executable
        if os.path.exists(exe_path):
            os.remove(exe_path)
    
    return jsonify({
        'output': output,
        'error': error
    })

if __name__ == "__main__":
    app.run(debug=True)