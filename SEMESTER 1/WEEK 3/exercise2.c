/* 
Calculate and display on separate lines the volume and the surface area of a box with height 10cm, length 11.5cm, width 2.5cm. 

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 
    float height = 10.0;
    float lenght = 11.5;
    float width = 2.5;
    float volume = 0;
    float surface_area = 0; 
    
    volume = height * lenght * width;
    
    surface_area = height * lenght;

    printf ("The volume of a box with height 10cm, length 11.5cm, width 2.5cm is %fcm^3.\nIts surface area is %fcm^2.", volume, surface_area);

    return 0;
}