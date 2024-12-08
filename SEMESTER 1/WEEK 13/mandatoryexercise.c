/*
(i) Write a program that uses DMA to allocate memory for 5 floating-point numbers. You can use either malloc() or calloc().
(ii) After memory has been allocated for the 5 float numbers, enter these numbers into the memory block.
(iii) Calculate and display the average of the numbers stored in the memory block.

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

            //calculate sum of entered numbers
            sum = sum + *(ptr + i);
        } // end for

        printf("\nYou entered:\n");


        // Display the data items entered into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            printf("%f\n", *(ptr + i));
        } // end for

        //calculate and display average of entered numbers
        average = sum / numbers;
        printf("The average of the 5 floating numbers entered is: %f", average);
    
    // Free the allocated memory block once finished using it 
    free(ptr);
    } // end els    

    return 0;
}