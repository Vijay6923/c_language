#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int capitalCount = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Count occurrences of capital letters
    while (text[i] != '\0') {
        if (isupper(text[i])) {
            capitalCount++;
        }
        i++;
    }

    printf("Number of capital letters: %d\n", capitalCount);

    return 0;
}
