#include <stdio.h>

int main() {
    double a, b, c, D;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D > 0)
        printf("The roots are real and distinct.\n");
    else if (D == 0)
        printf("The roots are real and equal.\n");
    else
        printf("The roots are imaginary.\n");
    return 0;
}
