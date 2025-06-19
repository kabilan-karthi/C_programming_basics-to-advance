#include <stdio.h>
int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int reversed_num = 0, remainder;
    int original_num = num; 
    int temp_num = num;
    while (temp_num > 0) {
        remainder = temp_num % 10;
        reversed_num = reversed_num * 10 + remainder;
        temp_num /= 10;
    }
    int sq1 = original_num * original_num;
    int sq2 = reversed_num * reversed_num;
    int rev_sq1 = 0, temp_sq1 = sq1;
    while (temp_sq1 > 0) {
        remainder = temp_sq1 % 10;
        rev_sq1 = rev_sq1 * 10 + remainder;
        temp_sq1 /= 10;
    }
    if (rev_sq1 == sq2) {
        printf("It's an Adam Number\n");
    } else {
        printf("Not an Adam Number\n");
    }
    return 0;
}
