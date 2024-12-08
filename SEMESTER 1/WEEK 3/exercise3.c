/* 
Write a program that uses the modulus operator, i.e., % , to calculate and display the remainder for the following arithmetic operations:
• 2 % 2
• 3 % 2
• 5 % 2
• 7 % 3
• 100 % 33
• 100 % 7 

Beatrice Maria Giurgica

03/10/2023
*/

#include <stdio.h>

int main()
{ 
    int remainder1 = 0;
    int remainder2 = 0;
    int remainder3 = 0;
    int remainder4 = 0;
    int remainder5 = 0;
    int remainder6 = 0;


    remainder1 = 2 % 2;
    printf ("The remainder of 2/2 is \n%d\n\n", remainder1);

    remainder2 = 3 % 2;
    printf ("The remainder of 3/2 is \n%d\n\n", remainder2);

    remainder3 = 5 % 2;
    printf ("The remainder of 5/2 is \n%d\n\n", remainder3);

    remainder4 = 7 % 3;
    printf ("The remainder of 7/3 is \n%d\n\n", remainder4);

    remainder5 = 100 % 33;
    printf ("The remainder of 100/33 is \n%d\n\n", remainder5);

    remainder6 = 100 % 7;
    printf ("The remainder of 100/7 is \n%d\n\n", remainder6);


    return 0;
}
