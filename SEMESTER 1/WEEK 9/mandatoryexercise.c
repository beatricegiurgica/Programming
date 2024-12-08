/*
Write a program that uses a 3x2(2-D) array. Your program must do the following:
a) Enter values into the array
b) Display the values in the array
c) Find the smallest & largest value
d) Display both to standard output
e) Calculate the average of the values
f) Display the average to standard output

Beatrice Maria Giurgica 

14/11/2023
*/

#include <stdio.h> 

#define ROW 3
#define COL 2

int main()
{ 
    int myarray [ROW][COL];
    int i,j;
    int smallest = 0;
    int largest = 0;
    int largerowloc = 0;
    int largecolumnloc = 0; 
    int smallrowloc = 0;
    int smallcolumnloc = 0;
    int sum = 0;
    float average = 0;


    printf("Please enter %d numbers:\n", ROW*COL);    
    // A. Enter data into the array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles COL
        for(j = 0; j < COL; j++)
            {
            // read in data
                scanf("%d", &myarray[i][j]);
            } // end inner for
    } // end outer for


    // B. Display the data entered into the array
    for(i = 0; i < ROW; i++)
    {
        // Inner for that handles COL
        for(j = 0; j < COL; j++)
            {
                // display the data
                printf("\nRow %d, Col %d contains %d", i, j,myarray[i][j]);
            } // end inner for
    } // end outer for


    // C. Find the smallest & largest value
    // Assume first element is largest and smallest
    largest = myarray[0][0];
    smallest = myarray[0][0];

    // compare with all elements
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(largest<myarray[i][j])
            {
                largest = myarray[i][j];
                largerowloc = i;  //row location of largest element
                largecolumnloc = j;   //column location of largest element
            }

            if(smallest>myarray[i][j])
            {
                smallest = myarray[i][j];
                smallrowloc = i;  //row location of smallest element
                smallcolumnloc = j;  //column location of smallest element
            }
        }
  }

    // D. Display results
    printf("\n\n"); // 2 new lines
    printf("The largest element in the array is %d in location [%d][%d]\n",largest, largerowloc, largecolumnloc);
    printf("The smallest element in the array is %d in location [%d][%d]\n",smallest, smallrowloc, smallcolumnloc);


    // E. Average of the values
    // Sum of the values
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum = sum + myarray[i][j];

        }
    }

    // Average of the values
    average = (float)sum / (ROW*COL);
    

    // F. Display results
    printf("\n\n"); // 2 new lines
    printf("The sum of all elements in the array is %d\n",sum);
    printf("The average of all elements in the array is %f\n",average);

    return 0;
}