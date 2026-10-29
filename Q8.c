// Question: Write a C program that reads 5 integers into an array and counts how many numbers are even and how many are odd.
#include <stdio.h>
int main ()
{
    int arr[5];
    int odd_count=0;
    int even_count=0;
    printf("Enter the numbers: ");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<5 ; i++ )
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else 
        {
            odd_count++;
        }
    }
    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d", odd_count);
    return 0;
}