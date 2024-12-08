/*
Program to find a random generated number.

Beatrice Maria Giurgica 

28/11/2023
*/

#include <stdio.h>
#include <stdlib.h> // This header file is required for the rand() function
#include <time.h> // Used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
    int user_guess = 0;
    int guessHistory[MAX_ATTEMPTS];
    int attempts = 0;
    int i = 0;

    
    printf("Generating a random number between 1 - 25\n");
    
    // Seed the random number generator with a range 0 – large number
    srand(time(NULL));
    
    // Num is assigned a random number between 1 – 10 
    num = (rand() % 25) + 1;
    
    // Guess the random generated number in 5 attempts max
    printf("Try to guess the random generated number. You have a maximum of 5 attempts.\n");
    printf("Enter your guess: ");

    // Read data into array
    for (i = 0; i < MAX_ATTEMPTS; i++)
    {
        printf("Enter your guess : ");
        // Read in data
        scanf("%d", &guessHistory[attempts]);

        user_guess = guessHistory[0];
        for (attempts = 0; attempts < MAX_ATTEMPTS; attempts++)
        {  
            // Guess is correct
            if(user_guess = 0)
            {
                printf("Your guess was correct!");
            } // End if


            // Guess is not correct
            else
            {
                // Guess is too low
                if(user_guess < num )
                {
                    printf("Your guess was not correct. Try again by entering a bigger number!\n");
            
                } // End if

                // Guess is too high
                if(user_guess > num)
                {
                    printf("Your guess was not correct. Try again by entering a smaller number!\n");
            
                } // End if

            } // End else

        } // End for
    } // End for


    //  Display the user guess history
    printf("User guess history : %d \n", guessHistory);
    
    return 0;
    
} // end main