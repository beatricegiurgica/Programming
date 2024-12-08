/*
Complete the following program so that it computes the sum of all the elements in the array

Beatrice Maria Giurgica

21/11/2023
*/

#include <stdio.h> 

#define ROW 4
#define COL 6

int main()
{ 
    int array1[ROW][COL] = { {3, 2, 5, 7, 4, 2},
                           {1, 4, 4, 8, 13, 1},
                           {9, 1, 0, 2, 5, 7 },
                           {0, 2, 6, 3, -1, -8}};
    int sum = 0;
    int i, j;
    

    // compute the sum
    for ( i=0; i < ROW; i++)
        {
            for ( j=0; j < COL; j++)
            {
                sum = sum + array1[i][j];
            }
        }


    // display the sum
        printf("\nThe sum of all elements in the array is %d", sum);
    
    return 0;
} 