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
    if(original_num==reversed_num){
        printf("It is a palindrome");
    }
    else{
        printf("It's not a palindrome");
    }
}
