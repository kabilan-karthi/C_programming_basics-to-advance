#include <stdio.h>
int countDigits(long long n) {
    int c = 0;
    do {
        c++;
        n /= 10;
    } while (n != 0);
    return c;
}
void formatNumber(long long n) {
    int len = countDigits(n);
    if (len == 6) {
        long long p1 = n / 10000;               
        long long p2 = (n / 100) % 100;         
        long long p3 = n % 100;
        printf("%02lld-%02lld-%02lld\n", p1, p2, p3);
    } else if (len == 10) {
        long long p1 = n / 10000000;
        long long p2 = (n / 10000) % 1000;      
        long long p3 = n % 10000;               
        printf("%03lld-%03lld-%04lld\n", p1, p2, p3);
    } else {
        printf("Number length not supported.\n");
    }
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    formatNumber(n);
    return 0;
}
