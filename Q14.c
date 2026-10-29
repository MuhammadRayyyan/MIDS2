// Full Pyramid (Stars with Spaces)
#include <stdio.h>
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Spaces print karna
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Star aur space print karna
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}