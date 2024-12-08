/*
Write a program that uses 2 functions called sum() and average(). 
Your program must ask the user to enter 3 numbers inside the main(). 
Your main() should then pass these 3 values as parameters to the function sum(). 
This function should calculate the sum of the 3 numbers. 
Your function sum() should then pass the sum of the 3 numbers as a parameter to the function average(). The function average() should then calculate the average of the 3 numbers and display this on the screen.

Beatrice Maria Giurgica 

30/01/2024
*/

#include <stdio.h> 

void sum(int, int, int);
void average(int);


int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0; 
    int i = 0;

    
    printf("Please enter 3 numbers\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    printf("You have entered: %d, %d, %d\n", number1, number2, number3);


    //Execute the function sum()    
    sum(number1, number2, number3);
    
    return 0;
} //end main



//Function sum() used to display the sum between 3 numbers inside the main()
void sum(int number1, int number2, int number3)
{
    int sum = 0;

    sum = number1 + number2 + number3;
        
    printf("The sum is %d\n", sum); 

    //Execute the function average()
    average(sum);

} //end sum



//Function average() used to display the average between 3 numbers inside the main()
void average(int sum)
{
    int average = 0;

    average = sum/3;
        
    printf("The average is %d\n", average); 

} //end average
