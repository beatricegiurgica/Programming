/*
3. Write a program that allows a user to input two words. 
Compare these words to see if they are the same. 
Display appropriate messages whether or not the two words are the same.

4. Using separate functions for part (a) and (b) below, extend your program in Q3 to do the following:
a) Concatenate the first word entered to the end of the string: "First word entered is ". Display this entire string on the screen.
b) Calculate the length of the string in part (a) above and display the number of characters used.


Beatrice Maria Giurgica 

27/02/2024
*/

#include <stdio.h> 
#include <string.h> 
#define SIZE 50

void calculatestringlenght(mystring, mystring2);

int main()
{
    char myfirstword[SIZE];
    char mysecondword[SIZE];
    char mystring[SIZE] = "First word entered is:";
    char mystring2[SIZE] = "Second word entered is:";
    int result = 0;
    int i;
    
    //Read in the first word
    printf("Enter a word:\n");
    gets(myfirstword);

    //Read in the second word
    printf("Enter another word:\n");
    gets(mysecondword);

    //Concatenate the first word entered to the end of the string: "First word entered is "
    strcat(mystring, myfirstword);

    //Display the new string
    printf("\n%s", mystring);

    //Concatenate the second word entered to the end of the string: "First word entered is "
    strcat(mystring2, mysecondword);

    //Display the new string
    printf("\n%s", mystring2);



    //Compare both strings and see if they are the same
    result = strcmp(myfirstword, mysecondword);

    //Check if the strings are the same
    if (result == 0)
    {
        printf("\n\nWords are the same.");
    } else
    {
        printf("\n\nWords are different.");
    }

    //Function to calculate the lenght of the first and second string 
    calculatestringlenght(mystring, mystring2);

    return 0;
}



void calculatestringlenght(mystring, mystring2)
{
    printf("\nThe first string has %d characters.\n", strlen(mystring));
    printf("The second string has %d characters.\n", strlen(mystring2));

    return 0;
}