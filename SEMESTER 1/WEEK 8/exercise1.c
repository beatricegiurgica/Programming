/*
Write a program that uses an array to enter 5 integer numbers. Copy the contents of the array into another array using only a loop!

Beatrice Maria Giurgica 

07/11/2023
*/

#include <stdio.h> 

#define MY_ARRAY 5
#define COPY_MY_ARRAY 5

int main()
{ 
    int my_integer [MY_ARRAY];
    int copy_my_integer [COPY_MY_ARRAY];
    int i;

    printf("Please enter 5 integers:\n");
    for (i=0; i < MY_ARRAY; i++)
    {
        scanf("%d", &my_integer[i]);
    }

    //Loop to copy the values from the 1st array into the 2nd array
    for (i=0; i < COPY_MY_ARRAY; i++)
    {
        copy_my_integer[i] = my_integer[i];
        printf("The copied array contains: %d ", copy_my_integer[i]);
    }

    return 0;
}