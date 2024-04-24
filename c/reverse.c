#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char original[100];
    char reversed[100];
    int i, j, isPalindrome;

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    // Remove newline character from the input
    original[strcspn(original, "\n")] = 0;

    // Reverse the string
    j = 0;
    for (i = strlen(original) - 1; i >= 0; i--) {
        reversed[j++] = original[i];
    }
    reversed[j] = '\0';

    // Check if the original string is a palindrome
    isPalindrome = 1;
    for (i = 0; i < strlen(original); i++) {
        if (tolower(original[i]) != tolower(reversed[i])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}
