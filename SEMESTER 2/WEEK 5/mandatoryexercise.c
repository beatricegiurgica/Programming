/*
Write a program to read in your name and display it with a space between each letter (i.e. J o h n).
Try to use fgets() and puts() to read/write strings.

Beatrice Maria Giurgica 

20/02/2024
*/

#include <stdio.h> 
#include <string.h> 

#define SIZE 9

int main()
{
    char myname[SIZE];
    int i;
    
    //Read in your name
    printf("Enter your name:\n");
    gets(myname);


    //Display your name with a space between each letter
    for (i = 0; i < SIZE; i++)
    {
        printf("%c  ", myname[i]);
    }

    return 0;
}