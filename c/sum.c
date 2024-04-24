#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculateLovePercentage(const char *boyName, const char *girlName) {
    int seed = 0;
    for (int i = 0; boyName[i] != '\0'; i++) {
        seed += boyName[i];
    }
    for (int i = 0; girlName[i] != '\0'; i++) {
        seed += girlName[i];
    }

    srand(seed);

    return rand() % 101; // Generates a random number between 0 and 100
}

int main() {
    char boyName[100], girlName[100];

    printf("Enter the boy's name: ");
    scanf("%s", boyName);

    printf("Enter the girl's name: ");
    scanf("%s", girlName);

    int lovePercentage = calculateLovePercentage(boyName, girlName);

    printf("\nCalculating love percentage...\n");
    printf("Love Percentage between %s and %s is: %d%%\n", boyName, girlName, lovePercentage);

    return 0;
}
