/*
Write a program that defines an intger array with 5 elements. Your program must do the following:
- enter the 5 integer values into the array;
- define another integer array with 5 elements and copy the values from the 1st array into the 2nd array in reverse order.

Beatrice Maria Giurgica 

07/11/2023
*/

#include <stdio.h> 

#define MY_FIRST_ARRAY 5

int main()
{ 
    int my_list [MY_FIRST_ARRAY];
    int my_reversed [MY_FIRST_ARRAY]; 
    int i, j;
    int temp = 0;

    printf("Please enter 5 integers.\n");
    for (i=0; i < MY_FIRST_ARRAY; i++)
    {
        scanf("%d", &my_list[i]);
    }


    //Loop to copy the values from the 1st array into the 2nd array in reverse order
    for (i=0, j=(MY_FIRST_ARRAY -1); i < MY_FIRST_ARRAY; i++, j--)
    {
        temp = my_list[i];
        my_reversed[j] = temp;
    }

    //Loop to print the values in reverse order
    for (j=0; j < MY_FIRST_ARRAY; j++)
    {
        printf("The numbers in reversed order are: %d", my_reversed[j]);
    }

    return 0;
}