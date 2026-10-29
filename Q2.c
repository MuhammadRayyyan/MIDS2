// "Write a C program that takes an integer from the user, reverses the number, calculates the sum of digits located at even
//  positions (counting from the right/units place), and finally prints the sum of the reversed number and that even-position sum."
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int temp = num;
    int digit, rev = 0, sumeven = 0, pos = 1;

    while (temp > 0) {
        digit = temp % 10;
        rev = (rev * 10) + digit;
         
        if (pos % 2 == 0) {
            sumeven = sumeven + digit;
        }

        temp = temp / 10;
        pos++;
    }

    int result = rev + sumeven;
    printf("%d\n", result);

    return 0;
}           