/*
Program Description: Word guessing game
The program will prompt the user to guess the characters in the word “coding”.
The program provides feedback on whether each guessed character entered is present or not. 
The user is allowed a maximum of 7 wrong character guesses.

Beatrice Maria Giurgica 

09/04/2024
*/

#include <stdio.h> 
#include <string.h>

#define SIZE 7
#define MAX_ATTEMPTS 7

// Function signature
int check_userguess(char[], char);


int main() 
{
    char wordtoguess[SIZE] = "coding";
    char guessedword[SIZE];
    char userguess;
    int attempts = MAX_ATTEMPTS;
    int i;


    // Insert underscores into guessedword 
    for (i=0; i < strlen(wordtoguess); i++)
    {
        guessedword[i] = '_';
    }

    // Insert NULL character at the end of guessedword
    guessedword[strlen(wordtoguess)] = '\0';



    printf("Welcome to a word guessing game!\n");
    printf("RULES:\nYou are allowed to enter only one character at a time.\nYou are allowed a maximum of 7 wrong character guesses.\n\n");

    // Prompt the user to enter a character from standard input
    while (attempts > 0)
    {
        printf("Enter your guess: ");
        scanf("%c", &userguess);

        // Clear input buffer
        while (getchar() != '\n');


        // Check if guessed character is in the word by calling check_userguess() function
        if (check_userguess(wordtoguess, userguess) == 1)
        {
            // Insert correctly guessed character into guessedword
            for(i = 0; i < strlen(wordtoguess); i++)
            {
                if(wordtoguess[i] == userguess)
                {
                    guessedword[i] = userguess;
                }
            }
    
            printf("Correct guess! %c is present in the word here: %s\n", userguess, guessedword);


            // Exit the loop if user guessed the word correctly
            if(strcmp(wordtoguess, guessedword) == 0)
            {
                printf("Congratulations! You guessed the word: %s\n", wordtoguess);
                break; 
            }
        }
        else 
        {
            printf("%c is not in the word.\n", userguess);
            
            // Display the number of attempts left
            attempts--;
            printf("You have %d attempts left.\n", attempts);

            // Program ends if user runs out of attempts
            if(attempts == 0)
            {
                printf("Game over, you have run out of attempts. The correct word is: %s.\n", wordtoguess);
                break;
            }
        }
    }
    
    return 0;
}



// Function to check if the guessed character is in wordtoguess
int check_userguess(char wordtoguess[], char userguess)
{
    int wordtoguess_lenght = 0;
    int i;

    wordtoguess_lenght = strlen(wordtoguess);

    for(i = 0; i < wordtoguess_lenght; i++)
    {
        if (wordtoguess[i] == userguess)
        {
            return 1;   // Exit the function and return 1 if character is present
        }
    }

    return 0;   // Exit the function and return 0 if character is not present 
}