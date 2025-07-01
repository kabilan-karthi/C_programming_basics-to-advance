#include <stdio.h>

int main() {
    int low = 1, high = 100;
    char response;
    int guess;

    printf("Think of a number between 1 and 100.\n");
    printf("I will try to guess it!\n");
    printf("Respond with:\n");
    printf("  'h' if my guess is too high\n");
    printf("  'l' if my guess is too low\n");
    printf("  'c' if my guess is correct\n\n");

    while (low <= high) {
        guess = (low + high) / 2;
        printf("Is your number %d? (h/l/c): ", guess);
        scanf(" %c", &response);

        if (response == 'c') {
            printf("I guessed your number: %d\n", guess);
            break;
        } else if (response == 'h') {
            high = guess - 1;
        } else if (response == 'l') {
            low = guess + 1;
        } else {
            printf("Invalid input. Please enter 'h', 'l', or 'c'.\n");
        }
    }

    if (low > high) {
        printf("Hmm... are you sure you followed the rules?\n");
    }

    return 0;
}
