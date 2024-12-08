/* 
Calculate the area of a circle with a radius of 4.8 cm.

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 
    float radius = 4.8;
    float radius2 = 0.0;
    float pi = 3.14;
    float area_circle = 0;

    radius2 = radius * radius;
    area_circle = radius2 * pi;

    printf("The area of a circle with a radius of 4.8 cm is %fcm^2", area_circle);

    return 0;
}