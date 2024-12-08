/*
Create a copy of Q2 (mandatory exercise). Modify the code so that it does:
(i) Allocate a second memory block and store the average value
calculate in part (iii) in this block. Display all of the 5 float values in the first memory
block and their average value in the second memory block on the screen.
(Hint: you will need to use 2 float pointers, one pointer to the block of memory
storing the 5 floating-point numbers, the other pointer to the block of memory storing
the average of the 5 numbers).


Beatrice Maria Giurgica 

12/12/2023
*/

#include <stdio.h> 
#include <stdlib.h>



int main()
{
    int numbers = 5;
    float sum = 0;
    float average = 0;
    float *ptr;
    float no_bytes = 0;
    float no_bytes_average = 0;
    int i;

    
    // Calculate the number of bytes required to store the set of numbers in memory
    no_bytes = numbers * sizeof(float);

    
    // Allocate the block of memory required
    ptr = malloc(no_bytes);

    
    // Check if malloc was successful, i.e., check if the memory was allocated successfully
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } // end if
    else // memory allocated successfully
    {
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter %d floating-point numbers\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%f", & *(ptr + i));
            sum = sum + *(ptr + i);
        } // end for

        printf("\nYou entered:\n");


        // Display the data items entered into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            printf("%f\n", *(ptr + i));
        } // end for

        average = sum / numbers;
        printf("The average of the 5 floating numbers entered is: %f", average);
    
    // Free the allocated memory block once finished using it 
    free(ptr);
    } // end els    

    return 0;
}