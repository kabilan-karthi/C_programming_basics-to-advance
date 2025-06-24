#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    printf("Array elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Secondary diagonals\n");
    for(int i = 0; i < 2; i++) {
    printf("%d ", arr[i][2-1-i]);
}
    return 0;
}
