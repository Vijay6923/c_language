#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, col;

    // Get the number of rows from the user
    printf("Enter the value of rows: ");
    scanf("%d", &rows);

    // Get the number of columns from the user
    printf("Enter the value of col: ");
    scanf("%d", &col);

    // Allocate memory for the 2D array
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(col * sizeof(int));
    }

    // Input the matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the trace of the matrix
    int trace = 0;
    for (int i = 0; i < rows && i < col; i++) {
        trace += matrix[i][i];
    }

    printf("Trace of the matrix: %d\n", trace);

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
