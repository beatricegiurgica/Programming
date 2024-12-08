/*
Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4 columns in each) when they are declared. In your program, declare a 3 rd 3x4 array.
Multiply each corresponding element in the 1 st and 2 nd array and store this product in the corresponding element of the 3 rd array. For example, array3[0][0] = array1[0][0] x array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc.

Beatrice Maria Giurgica

21/11/2023
*/

#include <stdio.h> 

#define ROW 3
#define COL 4

int main()
{ 
    int array1 [ROW][COL];
    int array2 [ROW][COL];
    int array3 [ROW][COL];
    int i = 0;
    int j = 0;

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



    printf("\nEnter %d numbers in the first array:\n", ROW*COL);
    // this loop will be used to enter an age into each element of the second array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            // read in data
            scanf("%d", &array2[i][j]);
        } // end inner for
    } // end outer for
    
    // Display the data entered into the array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow %d, Col %d contains %d", i, j, array2[i][j]);
        } // end inner for
    } // end outer for


    // multiply each corresponding element in the 1 st and 2 nd array and store this product in the corresponding element of the 3 rd array
    array3[0][0] = array1[0][0] * array2[0][0];
    array3[0][1] = array1[0][1] * array2[0][1];
    array3[0][2] = array1[0][2] * array2[0][2];
    array3[0][3] = array1[0][3] * array2[0][3];

    array3[1][0] = array1[1][0] * array2[1][0];
    array3[1][1] = array1[1][1] * array2[1][1];
    array3[1][2] = array1[1][2] * array2[1][2];
    array3[1][3] = array1[1][3] * array2[1][3];

    array3[2][0] = array1[2][0] * array2[2][0];
    array3[2][1] = array1[2][1] * array2[2][1];
    array3[2][2] = array1[2][2] * array2[2][2];
    array3[2][3] = array1[2][3] * array2[2][3];

    // Display the data entered into the array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles the Cols
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nThird array:Row %d, Col %d contains %d", i, j, array3[i][j]);
        } // end inner for
    } // end outer for
    
    
    return 0;
} 