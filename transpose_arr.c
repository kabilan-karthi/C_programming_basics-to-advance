#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {3, 2, 4}};
    int transposed[3][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    printf("Transposed array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
