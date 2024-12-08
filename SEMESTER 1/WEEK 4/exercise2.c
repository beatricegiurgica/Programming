/*
Ask the user to enter 2 characters. Display these on the screen. Change your code and see what happens if you use %d as the delimiter for displaying these letters.

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    char letter1 = 'a';
    char letter2 = 'a';

    printf("Enter one letter\n");
    scanf("%c", &letter1);

    while (getchar() != '\n'); //its presence is important, as it is specifying not to read the enter character in line 23

    printf("Enter another letter\n");
    scanf("%c", &letter2);

    printf("You entered %c and %c", letter1, letter2);

    return 0;

}