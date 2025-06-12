#include <stdio.h>
int main() {
    char uppercase,lowercase;
    printf("Enter the uppercase letter:");
    scanf("%c",&uppercase);
    lowercase=uppercase+32;
    printf("The lowercase is %c",lowercase);
}
