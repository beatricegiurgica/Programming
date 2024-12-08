/*
In a triangle, the sum of any two sides must be greater than the third side. Write a program to input three numbers and determine if they form a valid triangle.

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    float side1 = 0;
    float side2 = 0;
    float side3 = 0;

    printf("Please enter 3 numbers\n");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);


    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    { 
        printf("This is a valid triangle\n");
    }

    else
    { 
        printf("This is not a valid triangle\n");
    }

    return 0;
} //end main