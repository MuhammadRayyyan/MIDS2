// Question: Write a C program that reads 4 integers into an array source, copies all its elements into 
// another array dest, and prints the copied array.
#include <stdio.h>

int main() {
    int source[4], dest[4];

    printf("Enter 4 numbers: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &source[i]);
    }

    // Copying elements
    for (int i = 0; i < 4; i++) {
        dest[i] = source[i];
    }

    // Printing copied array
    printf("Copied elements: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}