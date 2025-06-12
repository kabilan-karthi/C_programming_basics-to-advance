#include <stdio.h>

int main() {
    int a = 5, b = 3;  // Example values (5 = 0101, 3 = 0011 in binary)

    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);    // AND operation
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);     // OR operation
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);    // XOR operation
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);             // NOT operation
    printf("Left Shift: %d << 1 = %d\n", a, a << 1);      // Left shift
    printf("Right Shift: %d >> 1 = %d\n", a, a >> 1);     // Right shift

    return 0;
}
