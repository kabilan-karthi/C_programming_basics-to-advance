#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'W';
    char *ptr = strchr(str, ch);
    if (ptr != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
