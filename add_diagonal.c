#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int sum = 0;
    printf("Array elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 2; i++) {
        sum += arr[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
