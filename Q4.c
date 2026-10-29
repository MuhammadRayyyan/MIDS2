// "Write a C program that takes 5 integers from the user, calculates and displays their sum, and then
//  prints the entered numbers in reverse order using an array
#include <stdio.h>
int main ()
{

    int arr[5];
    int sum=0;
    printf("Enter 5 numbers: ");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    printf("The total sum would be: %d\n", sum);

    // print number in reverse order
    for(int i=4 ; i>=0 ; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
