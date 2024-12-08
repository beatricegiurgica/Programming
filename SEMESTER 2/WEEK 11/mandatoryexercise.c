/*
Write a C program to compare two text files and display any differences between the files.
In order to test your program, create the two text files beforehand that are short 
(only a couple of characters in each with some similarities and some differences). 
Does your program work if both text files contain text on:
a. a single line
b. multiple lines

Beatrice Maria Giurgica 

16/04/2024
*/

#include <stdio.h> 
#include <string.h>

#define MAX_CHARACTERS 500


int main()
{
    //Create a file pointer to a first file
    FILE *fp1;
    //Create a file pointer to a second file
    FILE *fp2;

    char multiplelines1[MAX_CHARACTERS];
    char multiplelines2[MAX_CHARACTERS];




    // Open the first file and check if the file was opened successfully
    if((fp1 = fopen("file1.txt", "r")) == NULL)
    {
        printf("\nError opening file");

    } // end if
    else
    {
        while( fgets(multiplelines1, MAX_CHARACTERS, fp1))
        {
          
            fputs(multiplelines1, fp1);
            printf("%s", multiplelines1);
        }

        // Close the file after completing all associated work
        fclose(fp1);
    } // end else



    // Open the second file and check if the file was opened successfully
    if((fp2 = fopen("file2.txt", "r")) == NULL)
    {
        printf("\nError opening file");
    } // end if
    else
    {
        while( fgets(multiplelines2, MAX_CHARACTERS, fp2) != NULL)
        {
            fputs(multiplelines2, fp2);
            printf("%s", multiplelines2);
        }

        // Close the file after completing all associated work
        fclose(fp2);
    } // end else


    if(strcmp(multiplelines1, multiplelines2) == 0)
    {
        printf("Files are identical.");
    } 
    else
    {
        printf("Files are different.");
    }

    return 0;
}