#include <stdio.h>

int main() {
    int n[10]; // 10 elements ka integer array banaya
    int i;

    // 1. Array ke har box mein 0 store karne ka loop
    for (i = 0; i < 10; i++) {
        n[i] = 0; // har index par 0 daal diya
    }

    // 2. Table ki heading print karna[cite: 4]
    printf("Element\tValue\n");

    // 3. Array ke index aur value print karne ka loop[cite: 4]
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, n[i]); // i index hai aur n[i] uske andar ki value[cite: 4]
    }

    return 0;
}