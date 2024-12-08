/*
Ask the user to enter 3 numbers and display these on separate lines

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter first whole number\n");
    scanf("%d", &num1);

    printf("Enter second whole number\n");
    scanf("%d", &num2);

    printf("Enter third whole number\n");
    scanf("%d", &num3);

    printf("You entered \n%d\n%d\n%d", num1, num2, num3);

    return 0;

}

