#include <stdio.h>

int main() {
    int rows, start = 1;
    printf("Enter the number of pairs of lines: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 4)
                printf("%d", start + j);
            else
                printf("%d*", start + j);
        }
        printf("\n");
        start += 5;
        for (int j = 4; j >= 0; j--) {
            if (j == 0)
                printf("%d", start + j);
            else
                printf("%d*", start + j);
        }
        printf("\n");
        start += 5;
    }

    return 0;
}
