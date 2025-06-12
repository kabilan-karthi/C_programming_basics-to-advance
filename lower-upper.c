#include <stdio.h>
int main() {
    char uppercase,lowercase;
    printf("Enter the lowercase letter:");
    scanf("%c",&lowercase);
    uppercase=lowercase-32;
    printf("The Uppercase is %c",uppercase);
}
