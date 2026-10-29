// TRANSPOSE OF MATRIX
#include <stdio.h>

int main() {
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpose[3][2];

    // Swapping rows and columns
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            transpose[c][r] = a[r][c];
        }
    }

    // Printing Transpose (now 3 rows, 2 columns)
    printf("Transposed Matrix:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 2; c++) {
            printf("%d ", transpose[r][c]);
        }
        printf("\n");
    }

    return 0;
}