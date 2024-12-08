/*
Write a program that reads a sigle numeral from the keyboard and displays its value as a word.

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    int numeral = 0;

    printf("Please enter a single numeral from 1 to 10\n");
    scanf("%d", &numeral);

    switch(numeral)
    {
        
        case 1:
        {
            printf("one", numeral);
            
            break;
        } // end case 1

        case 2:
        {
            printf("two", numeral);
            
            break;
        } // end case 2

        case 3:
        {
            printf("three", numeral);
            
            break;
        } // end case 3

        case 4:
        {
            printf("four", numeral);
            
            break;
        } // end case 4

        case 5:
        {
            printf("five", numeral);
            
            break;
        } // end case 5

        case 6:
        {
            printf("six", numeral);
            
            break;
        } // end case 6

        case 7:
        {
            printf("seven", numeral);
            
            break;
        } // end case 7

        case 8:
        {
            printf("eight", numeral);
            
            break;
        } // end case 8

        case 9:
        {
            printf("nine", numeral);
            
            break;
        } // end case 9

        case 10:
        {
            printf("ten", numeral);
            
            break;
        } // end case 10

    } // end switch
    

    return 0;
} //end main