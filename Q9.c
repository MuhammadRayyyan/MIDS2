// Question: Write a C program that takes 5 integers from the user, asks for a target number (key), 
// and checks if that number exists in the array. If found, print its index.
#include <stdio.h>
int main () {

    int arr[5];
    int key;
    int found=0;
    printf("Enter 5 numbers: ");
    for(int i=0 ; i<5 ; i++){
        scanf("%d", &arr[i]);   
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for(int i=0 ; i<5; i++)
    {
        if(key==arr[i])
        {
            printf("Found %d at index %d\n", key , i+1);
            found=1;
            break;
        }
     
    }
      if(!found)
        {
            printf("Numbers not found");
        }

    return 0;
}