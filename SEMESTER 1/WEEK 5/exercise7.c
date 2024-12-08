/*
Write a program to input a number 1 to 7 from the keyboard, where 1 represents Sunday, 2 Monday, 3 Tuesday, 4 Wednesday, 5 Thursday, 6 Friday, 7 Saturday.Display te day of the week corresponding to the number typed by the user.

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    int numeral = 0;

    printf("Please enter a number from 1 to 7\n");
    scanf("%d", &numeral);

    switch(numeral)
    {

        case 1:
        {
            printf("Sunday", numeral);
            
            break;
        } // end case 1

        case 2:
        {
            printf("Monday", numeral);
            
            break;
        } // end case 2

        case 3:
        {
            printf("Tuesday", numeral);
            
            break;
        } // end case 3

        case 4:
        {
            printf("Wednesday", numeral);
            
            break;
        } // end case 4

        case 5:
        {
            printf("Thursday", numeral);
            
            break;
        } // end case 5

        case 6:
        {
            printf("Friday", numeral);
            
            break;
        } // end case 6

        case 7:
        {
            printf("Sunday", numeral);
            
            break;
        } // end case 7

    } // end switch

    
    if (numeral>7 || numeral<1)
    {
        printf("Error");
            
    } // end if statement
    

    return 0;
} //end main