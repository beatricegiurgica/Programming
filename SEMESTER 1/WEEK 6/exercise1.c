/*
Write a program using a while loop to display the numbers 1 - 10 in descending order on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1

Beatrice Maria Giurgica 

24/10/2023
*/

#include <stdio.h> 

int main()
{ 
    int num = 11;

    while (num<=11 && num>2)
    {
        num--;
        printf("%d,", num);
    }
    num = 1;
    printf("%d", num);

    return 0 ;
}