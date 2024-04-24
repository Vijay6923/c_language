// #include <stdio.h>
// int Prime(int x) {
//     if (x <= 1) {
//         return 0;
//     }
//     for (int i = 2; i * i <= x; i++) {
//         if (x % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int start, end;

//     printf("sample input (start and end numbers): ");
//     scanf("%d %d", &start, &end);

//     printf("sample output between %d and %d are: ", start, end);

//     for (int i = start; i <= end; i++) {
//         if (Prime(i)) {
//             printf("%d ", i);
//         }
//     }
    
//     return 0;
// }
//  write a program to find the position of maximum element in an array
#include <stdio.h>

int arrMaxPosition(int arr[], int size) {
    int max = arr[0];
    int position = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            position = i;
        }
    }
    return position;
}

int main() {
    int arr[6];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    int maxPosition = arrMaxPosition(arr, 6);
    printf("The position of the maximum element in the array is: %d\n", maxPosition);
    return 0;
}

