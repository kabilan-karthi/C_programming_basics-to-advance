#include <stdio.h>

void findFirstAndLast(int arr[], int n, int target, int *first, int *last) {
    *first = -1;
    *last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (*first == -1)
                *first = i;
            *last = i;
        }
    }
}

int main() {
    int arr[] = {5, 2, 5, 5, 5, 9, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int first, last;

    findFirstAndLast(arr, n, target, &first, &last);

    if (first != -1)
        printf("First occurrence of %d is at index %d\nLast occurrence is at index %d\n", target, first, last);
    else
        printf("%d not found in the array.\n", target);

    return 0;
}
