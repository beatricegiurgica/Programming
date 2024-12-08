/*
Write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it.

Beatrice maria Giurgica

21/11/2023
*/

#include <stdio.h> 

#define ROW 3
#define COL 2

int main()
{ 
    int array1[ROW][COL];
    int sum_row0 = 0;
    int sum_row1 = 0;
    int sum_row2 = 0;
    int sum_col0 = 0;
    int sum_col1 = 0;
    int highest = 0;
    int i, j;


    printf("Enter %d numbers in the first array:\n", ROW*COL);
    // this loop will be used to enter an age into each element of the first array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            // read in data
            scanf("%d", &array1[i][j]);
        } // end inner for
    } // end outer for
    
    // Display the data entered into the array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow %d, Col %d contains %d", i, j, array1[i][j]);
        } // end inner for
    } // end outer for
    


    // compute the sum of row0
    for(j=0; j < COL; j++)
    {
       sum_row0 = sum_row0 + array1[0][j];
    } // end for

    // display the sum
    printf("\nThe sum of all elements in row 0 is %d", sum_row0);



    // compute the sum of row1
    for(j=0; j < COL; j++)
    {
       sum_row1 = sum_row1 + array1[1][j];
    } // end for
    
    // display the sum
    printf("\nThe sum of all elements in row 1 is %d", sum_row1);



    // compute the sum of row2
    for(j=0; j < COL; j++)
    {
       sum_row2 = sum_row2 + array1[2][j];
    } // end for
    
    // display the sum
    printf("\nThe sum of all elements in row 2 is %d", sum_row2);



    // compute the sum of col0
    for(i=0; i < ROW; i++)
    {
       sum_col0 = sum_col0 + array1[i][0];
    } // end for
    
    // display the sum
    printf("\nThe sum of all elements in col 0 is %d", sum_col0);
    


     // compute the sum of col1
    for(i=0; i < ROW; i++)
    {
       sum_col1 = sum_col1 + array1[i][1];
    } // end for
    
    // display the sum
    printf("\nThe sum of all elements in col 1 is %d", sum_col1);


    // find highest value in the array
    highest = array1[0][0];

    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            if (array1[i][j] > highest)
            {
                highest = array1[i][j];
            } // end if 
        } // end inner for
    } // end outer for
    
    // display the highest element 
    printf("\nThe highest element in the array is %d", highest);
    
    return 0;
} 