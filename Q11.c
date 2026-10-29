//    Frequency Count (Counting Duplicates / Visited Logic)
#include <stdio.h>

int main ()
{
    int arr[5]={2,4,5,5,6};
    int n=5;
    int visisted[5]={0};
    for(int i=0 ; i<n ; i++)
    {
        if(visisted[i]==1)
        {
            continue;
        }
          int count=1;
          for(int j=i+1; j<n ; j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            visisted[j]=1;

        }
    }
    printf("%d occurs %d time(s)\n", arr[i], count);
    }
  
}