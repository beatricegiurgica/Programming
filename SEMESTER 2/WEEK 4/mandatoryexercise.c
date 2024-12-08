/*
Write a program that asks the user to enter 5 numbers from standard input. 
Pass the array to a function where the function checks each number in the array if it is even or odd. 
Your function should display each number and state whether it is even or odd. 
Finally, your function should calculate the total number of even numbers only and return this number to your main() and display it.

Beatrice Maria Giurgica 

13/02/2024
*/

#include <stdio.h> 

#define SIZE 5

int even_or_odd(int[]);

int main()
{
    int mynumbers[SIZE];
    int i;
    int total_evennumbers = 0;

    printf("Enter %d numbers:\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &mynumbers[i]);
    }

    total_evennumbers = even_or_odd(mynumbers);

    printf("\nThe total number of even numbers is %d", total_evennumbers);

    return 0;
}



//Function to check if each number in the array is even or odd
int even_or_odd(int check_mynumbers[])
{
    int total = 0;
    int i; 


    for(i = 0; i < SIZE; i++) //loop to control the number of rows in the tree
    {
        if(check_mynumbers[i] % 2 == 0)
        {
            printf("\n%d is even\n", check_mynumbers[i]);
            total = total + 1;
        } else
        {
            printf("\n%d is odd\n", check_mynumbers[i]);
        } 
    }

    return total;
}
