#include <stdio.h>
int sumDigitSquare(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
int isHappy(int n) {
    while (n != 1 && n != 4) {
        n = sumDigitSquare(n);
    }
    return (n == 1) ? 1 : 0;
}

int main() {
    int n = 12345;
    printf("%s\n", isHappy(n) ? "Yes" : "No");
    return 0;
}
