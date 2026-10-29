#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0]; // Assume first number is minimum

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update minimum
        }
    }

    printf("The minimum is: %d\n", min);
    return 0;
}