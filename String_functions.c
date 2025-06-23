#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));
    strcpy(str1, str2);
    printf("After copying, first string: %s\n", str1);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    int cmpResult = strcmp(str1, str2);
    if(cmpResult == 0) {
        printf("Strings are equal.\n");
    } else if(cmpResult > 0) {
        printf("First string is greater than second string.\n");
    } else {
        printf("First string is less than second string.\n");
    }

    return 0;
}
