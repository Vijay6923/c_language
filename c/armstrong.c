#include <stdio.h>

int main() {
    int num, digit, sum, temp;

    printf("Armstrong numbers between 1 and 500:\n");

    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}
