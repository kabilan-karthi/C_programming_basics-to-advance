#include <stdio.h>
int cal_ascii_sum(const char *str) {
    int sum = 0;
    while (*str) {
        sum += (int)(*str);
        str++;
    }
    return sum;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1); 
    getchar();            
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    int sum1 = cal_ascii_sum(str1);
    int sum2 = cal_ascii_sum(str2);
    printf("\nASCII sum of string 1: %d\n", sum1);
    printf("ASCII sum of string 2: %d\n", sum2);
    if (sum1 == sum2) {
        printf("The strings are equal\n");
    } else if (sum1 > sum2) {
        printf("String 1 has a greater\n");
    } else {
        printf("String 2 has a greater\n");
    }
    return 0;
}
