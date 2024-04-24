#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int spaces = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Reads the entire line until Enter is pressed

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        i++;
    }

    printf("Number of spaces in the string: %d\n", spaces);

    return 0;
}
