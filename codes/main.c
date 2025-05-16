#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declare variables
    char name[100];
    char validNames[1][10] = {"parvej"};
    int isMatched = 0;

    // Print content-type header for HTTP response
    printf("Content-Type: text/html\n\n");

    // Read input from stdin (POST data)
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove "name=" prefix and trailing newline (if any)
        char *input = strstr(name, "=");
        if (input != NULL) {
            input++; // Skip past '='
        }

        // Remove trailing newline or '&' character
        size_t len = strlen(input);
        if (len > 0 && (input[len - 1] == '\n' || input[len - 1] == '&')) {
            input[len - 1] = '\0';
        }

        // Match input name using loop and if-else
        for (int i = 0; i < 1; i++) {
            if (strcmp(input, validNames[i]) == 0) {
                isMatched = 1; // Match found
                break;
            }
        }

        // Output response
        if (isMatched) {
            printf("<html><body>");
            printf("<h1>Welcome, %s!</h1>", validNames[0]);
            printf("<p>[GRAPHIC IMAGE WOULD BE DISPLAYED HERE]</p>");
            printf("</body></html>");
        } else {
            printf("<html><body>");
            printf("<h1>Access Denied!</h1>");
            printf("<p>Your name does not match 'parvej'.</p>");
            printf("</body></html>");
        }
    }

    return 0;
}
