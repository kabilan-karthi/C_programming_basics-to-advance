#include <stdio.h>
#include <math.h>
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number > 0) {
        int digits = (int)log10(number) + 1;
        printf("Number of digits: %d\n", digits);
    } else if (number == 0) {
        printf("Number of digits: 1\n");
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}
