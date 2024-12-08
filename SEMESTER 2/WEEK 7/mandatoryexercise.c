/*
Write a C program that reads a string from standard input and uses SEPARATE functions to do the following:
(a) Compare the string to the following string: “Hello World”.
(b) Determine the frequency of the word “is” (assuming there is at least one occurrence).

Beatrice Maria Giurgica 

05/03/2024
*/

#include <stdio.h> 
#include <string.h> 
#define SIZE 100

int main()
{
    char myfirststring[SIZE];
    char mysecondstring[SIZE] = "Hello World";
    char myword[SIZE] = "is";
    int myfirststring_length = 0;
    int myword_length = 0;
    int result = 0;
    int occurance = 0;
    int count = 1;
    int i, j;
    
    //Read in the first word
    printf("Please enter a string:\n");
    gets(myfirststring);

    //Compare both strings and see if they are the same
    result = strcmp(myfirststring, mysecondstring);

    //Check if the strings are the same
    if (result == 0)
    {
        printf("\nStrings are the same.\n");
    } else
    {
        printf("\nString are different.\n");
    }


    //Determine the frequency of the word "is"
    //Step 1: find the length of each string
    myfirststring_length = strlen(myfirststring);
    myword_length = strlen(myword);
    

    //Step 2: use a loop to verify the occurance
    for (i = 0; i < myfirststring_length - myword_length; i++)
    {
        occurance = 1;
        for (j = 0; j < myword_length; j++)
        {
            if (myfirststring[i + j] != myword[j])
            {
                occurance = 0;
                break;
            }
        }

        if (occurance == 1)
        {
            count++;
        }
    }

    printf("The word 'is' occurs %d times", count);
    return 0;
}