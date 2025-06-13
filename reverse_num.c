#include <stdio.h>
int main() {
    int num, reversed_num = 0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    int original_num = num;
    while (num > 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number of %d is: %d\n", original_num, reversed_num);

    return 0;
}
