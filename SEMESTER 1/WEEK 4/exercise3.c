/*
Ask the user to enter 3 float numbers. Display the 1st correct to 4 decimal places, the 2nd correct to 3 decimal places, and the 3rd with no decimal places on separate lines.

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;

    printf("Enter first floating.point number\n");
    scanf("%f", &num1);
    
    printf("Enter second floating.point number \n");
    scanf("%f", &num2);

    printf("Enter third floating.point number \n");
    scanf("%f", &num3);

    printf("You entered \n%.4f\n%.3f\n%.0f\n", num1, num2, num3);

    return 0;

}