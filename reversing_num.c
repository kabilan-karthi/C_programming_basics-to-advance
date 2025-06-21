#include <stdio.h>
int main() {
    int n;
    int binaryNumber = 0;  
    int placeValue = 1;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        int rem = n % 2;        
        binaryNumber = binaryNumber + rem * placeValue; 
        placeValue *= 10; 
        n = n / 2; }
    printf("%d\n", binaryNumber); 
    return 0;
}
