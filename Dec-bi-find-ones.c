#include <stdio.h>
int main() {
    int num, binary[32], i = 0, count = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        binary[i] = num % 2;  
        if (binary[i] == 1) {
            count++; 
        }
        num /= 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\nTotal number of 1s: %d\n", count);

    return 0;
}
