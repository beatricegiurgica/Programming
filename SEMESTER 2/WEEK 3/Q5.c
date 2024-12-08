/*
Q5. Write a program to demonstrate the use of Pass by Value with a function. 
i) Begin by creating an integer variable in your main() and initialise it to 1. Print this value here. 
ii) Next, call your function and pass this variable as a parameter to the function. 
iii) Increment the parameter variable in your function by 2 and print this value. Your function should end here, and execution returns back to where the function was called. 
iv) Finally, display the value of the variable in your main() again and see if it has changed value. Did the function increment the variable in your main()?

Beatrice Maria Giurgica 

06/02/2024
*/


#include <stdio.h> 

int mynewinteger(int);


int main()
{
    int myinteger = 1;

    printf("My integer has a value of %d\n", myinteger);


    //Execute the function mynewinteger() 
    myinteger = mynewinteger(myinteger);
    
    printf("The new value of my integer is %d\n", myinteger);


    return 0;
} //end main



//Function mynewinteger() used to increment the parameter variable in the function by 2
int mynewinteger(int newinteger)
{
    newinteger = newinteger + 2;
        
    printf("integer + 2 = %d\n", newinteger); 

    return newinteger;

} //end mynewinteger()
