#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int space_ascii = 32; 
    int space_count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    while (str[i] != '\0') {
        if (str[i] == space_ascii) {
            space_count++;
        }
        i++;
    }

    printf("Number of ASCII value %d (space) occurrences in the string: %d\n", space_ascii, space_count);

    return 0;
}
