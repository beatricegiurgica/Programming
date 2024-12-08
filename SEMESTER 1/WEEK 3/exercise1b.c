/* 
Calculate and display the average of the following floating-point numbers: 1.0, 1.1, 1.2, ..... 2.0

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 

    float var1 = 1.0;
    float var2 = 1.1;
    float var3 = 1.2;
    float var4 = 1.3;
    float var5 = 1.4;
    float var6 = 1.5;
    float var7 = 1.6;
    float var8 = 1.7;
    float var9 = 1.8;
    float var10 = 1.9;
    float var11 = 2.0;
    float sum = 0;
    float average = 0;

    sum = var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11;

    average = sum / 11;
    
    printf("The average of the following floating-point numbers: 1.0, 1.1, 1.2, ..... 2.0 is %f", average);

    return 0;
}
