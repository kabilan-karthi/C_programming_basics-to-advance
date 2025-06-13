#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(int i = 0; i < n; i++) {
        if(i <= 1)
            next = i; // 0, 1 for the first two terms
        else {
            next = first + second; // sum of previous two terms
            first = second; // update first
            second = next; // update second
        }
        printf("%d ", next);
    }

    return 0;
}
