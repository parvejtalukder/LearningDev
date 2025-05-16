const fileListElement = document.getElementById('file-list');
const codeViewer = document.getElementById('code-viewer');
const codeTitle = document.getElementById('code-title');
const codeContent = document.getElementById('code-content');
const codeSize = document.getElementById('code-size');
const codeLines = document.getElementById('code-lines');
const emptyState = document.getElementById('empty-state');
const fileCount = document.getElementById('file-count');

// Fetch file list from /codes/
async function loadFileList() {
  try {
    const response = await fetch('/codes/');
    const text = await response.text();
    const files = [...text.matchAll(/href="([^"]+\.c)"/g)].map(m => m[1]);

    fileListElement.innerHTML = '';
    files.forEach(file => {
      const li = document.createElement('li');
      li.textContent = file;
      li.addEventListener('click', () => loadFileContent(file));
      fileListElement.appendChild(li);
    });

    fileCount.textContent = `${files.length} files`;
  } catch (err) {
    console.error('Error loading file list:', err);
  }
}

// Load selected file content
async function loadFileContent(filename) {
  try {
    const response = await fetch(`/codes/${filename}`);
    const code = await response.text();

    codeTitle.textContent = filename;
    codeContent.textContent = code;
    codeLines.textContent = `${code.split('\n').length} lines`;
    codeSize.textContent = `${(new Blob([code]).size / 1024).toFixed(1)} KB`;

    hljs.highlightElement(codeContent);

    emptyState.style.display = 'none';
    codeViewer.style.display = 'block';
  } catch (err) {
    console.error('Error loading file:', err);
  }
}

// Initial load
document.getElementById('refresh-files').addEventListener('click', loadFileList);
window.addEventListener('DOMContentLoaded', loadFileList);
