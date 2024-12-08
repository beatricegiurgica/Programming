/*
Write a program to input three floating.point numbers from the keyboard and calculate their sum and their average. Display the results to three decimal places.

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float sum = 0.0;
    float average = 0.0;

    printf("Enter first floating.point number\n");
    scanf("%f", &num1);

    printf("Enter second floating.point number \n");
    scanf("%f", &num2);

    printf("Enter third floating.point number \n");
    scanf("%f", &num3);

    printf("You entered \n%.3f\n%.3f\n%.3f \n", num1, num2, num3);


    //Let's calculate the sum of num1, num2, num3
    sum = num1 + num2 + num3;
    printf("The sum is %.3f \n", sum);

    //Let's calculate the average of num1, num2, num3
    average = sum / 3;
    printf("The average is %.3f \n", average);


    return 0;

}