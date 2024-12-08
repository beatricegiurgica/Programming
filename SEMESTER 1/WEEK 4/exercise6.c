/*
Write a program to accept a temperature in degrees Fahrenheit and convert it to degrees Celcius. 

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    float temperature_fahrenheit = 0.0;
    float temperature_celcius = 0.0;

    printf("Enter a temperature in degrees Fahrenheit:");
    scanf("%f", &temperature_fahrenheit);

    temperature_celcius = (temperature_fahrenheit - 32.0)*(5.0/9.0);
    printf("The temperature in celcius is %f", temperature_celcius);

    return 0;

}