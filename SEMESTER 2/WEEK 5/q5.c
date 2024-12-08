/*
Beatrice Maria Giurgica 

20/02/2024
*/

#include <stdio.h> 
#include <string.h> 

#define SIZE 9

int main()
{
    char *p = "abcd";

    while(*p)
    {
        putchar(*p++);
    }
    
    printf("\n%c", *p);
    return 0;
}