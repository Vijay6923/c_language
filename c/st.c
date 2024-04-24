#include <stdio.h>
int to_octal(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

int main() {
    int decimalNumber;
    printf("Enter the decimal number: ");
    scanf("%d", &decimalNumber);
    if (decimalNumber >= 0) {
        int octalNumber = to_octal(decimalNumber);
        printf("The octal equivalent is %d.\n", octalNumber);
    } else {
        printf("Invalid input. Please enter a non-negative decimal number.\n");
    }

    return 0;
}
