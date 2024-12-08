/*
Using pointer notation only, write a program that uses 2 floating-point arrays with 3 elements in each. Enter values into the 1st array. Copy the contents of this array into the 2nd array. Display the contents of both arrays.

Beatrice Maria Giurgica 

05/12/2023
*/

#include <stdio.h> 

#define SIZE 3

int main()
{
    float my_first_array[SIZE];
    float my_second_array[SIZE];
    int i;
    
    printf("Please enter %d numbers:\n", SIZE);

    //loop to enter a number into each element of the first array
    for(i=0; i<SIZE; i++)
    {
        //enter a number
        scanf("%f", &(*(my_first_array + i)));
        
    } //end for 


    //display the numbers entered in the first array
    printf("My first array contains %f at memory address %p\n", *my_first_array, &(*(my_first_array)));
    printf("My first array contains %f at memory address %p\n", *(my_first_array + 1), &(*(my_first_array + 1)));
    printf("My first array contains %f at memory address %p\n", *(my_first_array + 2), &(*(my_first_array + 2)));



    //loop to copy the contents of the first array into the second array
    for(i=0; i<SIZE; i++)
    {
        *(my_second_array + i) = *(my_first_array + i);
    } //end for 


    //print contents of the second array
    printf("My second array contains : %f, %f, %f \n", *my_second_array, *(my_second_array + 1), *(my_second_array + 2));

    return 0;
}