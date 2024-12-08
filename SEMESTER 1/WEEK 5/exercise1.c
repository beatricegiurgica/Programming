/*
Using a switch statement, write a program that asks the user to enter a character from standard-input and displays a message whether the character is a vowel (upper and lower case), i.e., (a, e, i, o, u) or not.

Beatrice Maria Giurgica 

17/10/2023
*/

#include <stdio.h>
int main()
{ 
    char oper;

    printf("Enter a character\n");
    scanf("%c", &oper);
 
    switch(oper)
    {
        case 'a':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'a'

        case 'e':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'e'

        case 'i':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'i'

        case 'o':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'o'

        case 'u':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'u'

        case 'A':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'A'

        case 'E':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'E'

        case 'I':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'I'

        case 'O':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'O'

        case 'U':
        {
            printf("The vowel entered is %c", oper);
            
            break;
        } // end case 'U'

    } // end switch

    return 0 ;
} //end main