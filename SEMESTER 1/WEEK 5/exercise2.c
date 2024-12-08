/*
Write a program that asks the user to enter an integer between 1 and 100. Check whether the integer is even or odd and print a message on the screen stating "Number x is Even" or "Number y is Odd".

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    int my_integer = 0;
    int my_remainder = 0;

    printf("Please enter an integer between 1 and 100\n");
    scanf("%d", &my_integer);

    my_remainder = (my_integer % 2); // every even number is divisible by 2 with no remainder 
    if (my_remainder == 0)
    {   
        printf("Number %d is Even", my_integer);
    } //end if

    else
    {
        printf("Number %d is Odd", my_integer);
    } //end else

    return 0 ;
} //end main