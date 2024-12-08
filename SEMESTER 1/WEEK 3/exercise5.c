/* 
Perform the following operations and display the result:
• 15 + 10
• 15 – 10
• 15 * 10
• 15 / 10
• 15 % 3

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 
    int sum = 0;
    int subtraction = 0;
    int multiplication = 0;
    float division = 0.0;
    int remainder = 0;

    sum = 15 + 10;
    printf("The sum of 15 + 10 is %d\n\n", sum);

    subtraction = 15 - 10;
    printf("The subtraction of 15 - 10 is %d\n\n", subtraction);

    multiplication = 15 * 10;
    printf("The multiplication of 15 * 10 is %d\n\n", multiplication);

    division = (float) 15/10;
    printf("The divison of 15 / 10 is %f\n\n", division);

    remainder = 15 % 3;
    printf("The remainder of the divison 15 / 3 is %d\n\n", remainder);

    return 0;
}
