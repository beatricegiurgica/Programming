/*
Write a C program to display the lines of a text file along with the line numbers. 
The first line should be proceeded by 1., the second by 2., etc., for each line in the text file.

Beatrice Maria Giurgica 

23/04/2024
*/

#include <stdio.h> 
#include <string.h>

#define MAX_CHARACTERS 1500


int main()
{
    //Create a file pointer to a first file
    FILE *fp1;

    char mytextfilelines[MAX_CHARACTERS];
    int count = 1;


    // Open the first file and check if the file was opened successfully
    if((fp1 = fopen("mytextfile.txt", "r")) == NULL)
    {
        printf("\nError opening file");

    } // end if
    else
    {
        while( fgets(mytextfilelines, MAX_CHARACTERS, fp1))
        {

            fputs(mytextfilelines, fp1);
            printf("%d %s", count, mytextfilelines);
            count++;
        }

        // Close the file after completing all associated work
        fclose(fp1);
    } // end else



    return 0;
}