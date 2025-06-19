#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    scanf("%19s", str);
    int len = strlen(str);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
