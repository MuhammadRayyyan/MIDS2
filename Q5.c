// Write a C program that takes 3 integers as input from the user into an array, finds the maximum (largest) 
// value among them, and prints it
#include <stdio.h>
int main ()
{
    int arr[3];
    printf("Enter 3 valeus: ");
    for(int i=0 ; i<3 ; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    int max = arr[0];
    for(int j=0 ; j<3 ; j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    printf("The max is: %d" , max);
    return 0;
}