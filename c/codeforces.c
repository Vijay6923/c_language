#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int heights[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int max_height_index = i;
        for (int j = i + 1; j < n; j++) {
            if (heights[j] > heights[max_height_index]) {
                max_height_index = j;
            }
        }
        // Swap the soldiers
        int temp = heights[i];
        heights[i] = heights[max_height_index];
        heights[max_height_index] = temp;

        // Count the swaps
        swaps += (max_height_index - i);
    }

    printf("%d\n", swaps);

    return 0;
}
