#include <stdio.h>
#include <math.h>

int main() {
    int num1 = 12456;
    int num2 = 34456;
    int temp = num2, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    int result = num1 * pow(10, digits) + num2;

    printf("Concatenated Number: %d\n", result);
    return 0;
}
