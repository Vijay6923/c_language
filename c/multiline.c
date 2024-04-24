#include <stdio.h>
#include <string.h>

int main() {
    char text[500];

    printf("Enter text to check for multi-line comment: \n");
    fgets(text, sizeof(text), stdin);

    // Check if the text is a multi-line comment
    int len = strlen(text);
    int i = 0;
    int isMultiLineComment = 0;

    while (i < len - 1) {
        // Check for the beginning of a multi-line comment
        if (text[i] == '/' && text[i + 1] == '*') {
            isMultiLineComment = 1;
            break;
        }
        i++;
    }

    if (isMultiLineComment) {
        int endFound = 0;
        while (i < len - 1) {
            // Check for the end of a multi-line comment
            if (text[i] == '*' && text[i + 1] == '/') {
                endFound = 1;
                break;
            }
            i++;
        }

        if (endFound) {
            printf("It's a multi-line comment.\n");
        } else {
            printf("It's an unterminated multi-line comment.\n");
        }
    } else {
        printf("It's not a multi-line comment.\n");
    }

    return 0;
}
