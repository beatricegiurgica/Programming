/*
Write a C program where the user enters a positive integer value, and compute the
following sequence:
    if the number is even, halve it
    if the number is odd, multiply by 3 and add 1.
(i) Repeat this process until the value is 1, displaying the current value each time.
(ii) Display the number of times the process in part (i) above was performed.

Beatrice Maria Giurgica 

24/10/20231
*/

#include <stdio.h> 

int main()
{ 
    int my_integer = 0;
    int remainder = 0;
    int counter = 0;

    printf("Please enter a positive integer value.\n");
    scanf("%d", &my_integer);


    remainder = my_integer % 2;


while (my_integer != 1)
{
    remainder = my_integer % 2;

    if (remainder == 0) //check if the number is even
    {
        printf("The integer you have entered is even.\n");
        my_integer = my_integer / 2;
        printf("The xext value is %d\n", my_integer);
    }

    else
    {
        printf("The integer you have entered is odd.\n");
        my_integer = my_integer * 3;
        my_integer++;
        printf("The next value is %d\n", my_integer);
    }  
    counter++;
}

printf("The process has been repreated %d times", counter);   

    return 0 ;
}