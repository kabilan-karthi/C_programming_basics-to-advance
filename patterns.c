#include <stdio.h>

void printRightTriangle(int n);
void printInvertedTriangle(int n);
void printPyramid(int n);
void printDiamond(int n);
void printSquare(int n);
void printNumberTriangle(int n);
void printNumberPyramid(int n);

int main() {
    int n = 5;

    printf("Right-Angled Triangle:\n");
    printRightTriangle(n);
    
    printf("\nInverted Triangle:\n");
    printInvertedTriangle(n);
    
    printf("\nPyramid:\n");
    printPyramid(n);
    
    printf("\nDiamond:\n");
    printDiamond(n);
    
    printf("\nSquare:\n");
    printSquare(n);
    
    printf("\nNumber Triangle:\n");
    printNumberTriangle(n);
    
    printf("\nNumber Pyramid:\n");
    printNumberPyramid(n);

    return 0;
}

void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void printInvertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void printDiamond(int n) {
    printPyramid(n);
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void printSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("* ");
        printf("\n");
    }
}

void printNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void printNumberPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", i);
        printf("\n");
    }
}
