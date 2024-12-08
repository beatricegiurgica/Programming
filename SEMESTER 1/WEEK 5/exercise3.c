/*
Write a program to read in two integers and check if the first integer is evenly divisible by the second.

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    int int1 = 0;
    int int2 = 0;
    int my_remainder = 0;

    printf("Please enter two integers\n");
    scanf("%d", &int1);
    scanf("%d", &int2);


    my_remainder = int1 % int2; 
    if (my_remainder == 0) // if the remainder of a division is equal to 0, the numbers are evenly divisible
    { 
        printf("%d is evenly divisible by %d", int1, int2);
    }

    else
    { 
        printf("%d is not evenly divisible by %d", int1, int2);
    }

    return 0;
} //end main