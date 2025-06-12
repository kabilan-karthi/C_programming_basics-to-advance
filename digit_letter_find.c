#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57) {
        printf("It's a digit!\n");
    } else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        printf("It's a letter!\n");
    } else {
        printf("It's something else!\n");
    }

    return 0;
}
