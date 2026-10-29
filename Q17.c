// BELL NUMBERS 
#include <stdio.h>

int main() {
    int n = 5; // Kitne numbers tak chahiye
    int bell[6][6];

    // Pehla element
    bell[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        // Nayi row ka pehla number = Pichli row ka aakhri number
        bell[i][0] = bell[i - 1][i - 1];

        // Row ke baaqi elements calculate karna
        for (int j = 1; j <= i; j++) {
            bell[i][j] = bell[i][j - 1] + bell[i - 1][j - 1];
        }
    }

    // N-th Bell number row ke pehle index par hota hai
    printf("5th Bell Number is: %d\n", bell[n][0]);

    return 0;
}