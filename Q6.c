// Write a C program that takes the marks of 5 subjects from the user into an array and displays a horizontal bar
//  chart (histogram) using asterisks (*), where the number of stars corresponds to the marks obtained in each subject.

#include <stdio.h>
#define ARRAY_SIZE 5
int main ()
{
     int marks[ARRAY_SIZE];
   for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &marks[i]);
    }

    for(int i=0 ; i<ARRAY_SIZE ; i++)
    { 
        printf("Marks of %d subject: %d" , i+1 , marks[i]);
        for(int j=0 ; j<marks[i] ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}