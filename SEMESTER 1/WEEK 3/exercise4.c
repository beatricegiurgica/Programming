/* 
Calculate and display the volume of a cube. The length of all sides of the cube is 2.8 m.

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 
    float side = 2.8;
    float volume_cube = 0;

    volume_cube = 2.8 * 2.8 * 2.8;

    printf("The volume of a cube which sides are 2.8m long is %fm^3", volume_cube);

    return 0;
}
