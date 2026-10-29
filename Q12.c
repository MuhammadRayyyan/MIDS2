// Question 3: 2D Array – Diagonal Sum (Trace & Anti-Diagonal)Scenario: Ek $3 \times 3$ square matrix lein. Uske Main Diagonal
//  (left-to-right) aur Anti-Diagonal (right-to-left) ka sum calculate karein.
#include <stdio.h>
int main ()
{
    int matrix[3][3]={
        {1 , 2 , 3},
        {2 , 4 , 5},
        {5 , 6 , 1}
    };
    int diagonal=0;
    int anti_diagonal=0;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(i==j)
            {
                diagonal= diagonal + matrix[i][j];
            }
            if(i+j==2)
            {
                anti_diagonal=anti_diagonal + matrix[i][j];
            }
        }
    }
    printf("Main Diagonal Sum: %d\n", diagonal);
    printf("Anti Diagonal Sum: %d\n", anti_diagonal);
    return 0;
}