#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    
    while (text[i] != '\0') {
        if (text[i] == 'a' || text[i] == 'A') {
            if (text[i] == 'a') {
                lowercaseCount++;
            } else {
                uppercaseCount++;
            }
        }
        i++;
    }

    printf("Number of lowercase 'a's: %d\n", lowercaseCount);
    printf("Number of uppercase 'A's: %d\n", uppercaseCount);

    return 0;
}
