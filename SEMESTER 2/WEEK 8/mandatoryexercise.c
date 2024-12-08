/*
Using Structures, write a program to do the following:
a) Enter data for a person's first name, surname, date of birth (use a nested structure), height, weight, eye colour & country of citizenship
b) Display all the data entered
c) Copy the data and store it in a 2 nd person's record. Modify the first name, surname and date of birth only
d) Display all the data for the 2 nd person

Beatrice Maria Giurgica 

19/03/2024
*/

#include <stdio.h> 
#include <string.h>

struct dateofbirth
{      
    int day;
    int month;
    int year;
};


struct person_biographicaldata
{
    char firstname[20];
    char surname[20];
    struct dateofbirth DOB;        
    int height;
    int weight;
    char eyecolour[20];
    char countryofcitizenship[30];
};


int main()
{
    struct person_biographicaldata person1, person2;

    //Enter the data for person1 from standard input
    printf("\nPerson 1");
    printf("\nEnter your first name: ");
    scanf("%s", person1.firstname);

    printf("\nEnter your suname: ");
    scanf("%s", person1.surname);

    printf("\nEnter your date of birth: ");
    printf("\n(order: day, month, year)\n");
    scanf("%d", &person1.DOB.day);
    scanf("%d", &person1.DOB.month);
    scanf("%d", &person1.DOB.year);

    printf("\nEnter your height in cm: ");
    scanf("%d", &person1.height);

    printf("\nEnter your weight in kg: ");
    scanf("%d", &person1.weight);

    printf("\nEnter your eye colour: ");
    scanf("%s", person1.eyecolour);

    printf("\nEnter your country of citizenship: ");
    scanf("%s", person1.countryofcitizenship);


    //Display the person's biographical data
    printf("\nPerson 1");
    printf("\nFirst name is: %s", person1.firstname);
    printf("\nSurname is: %s", person1.surname);
    printf("\nDate of birth is:");
    printf("\nDay %d", person1.DOB.day);
    printf("\nMonth %d", person1.DOB.month);
    printf("\nYear %d", person1.DOB.year);
    printf("\nHeight is: %d", person1.height);
    printf("\nWeight is: %d", person1.weight);
    printf("\nEye colour is: %s", person1.eyecolour);
    printf("\nCountry of citizenship is: %s", person1.countryofcitizenship);


    //Copy person1's data to person2
    person2 = person1;

    //Enter the data for person1 from standard input
    printf("\n\nPerson 2");
    printf("\nEnter your first name: ");
    scanf("%s", person2.firstname);

    printf("\nEnter your suname: ");
    scanf("%s", person2.surname);

    printf("\nEnter your date of birth: ");
    printf("\n(order: day, month, year)\n");
    scanf("%d", &person2.DOB.day);
    scanf("%d", &person2.DOB.month);
    scanf("%d", &person2.DOB.year);


    //Display the person's biographical data
    printf("\n\nPerson 2");
    printf("\nFirst name is: %s", person2.firstname);
    printf("\nSurname is: %s", person2.surname);
    printf("\nDate of birth is:");
    printf("\nDay: %d", person2.DOB.day);
    printf("\nMonth: %d", person2.DOB.month);
    printf("\nYear: %d", person2.DOB.year);
    printf("\nHeight is: %d", person2.height);
    printf("\nWeight is: %d", person2.weight);
    printf("\nEye colour is: %s", person2.eyecolour);
    printf("\nCountry of citizenship is: %s", person2.countryofcitizenship);
    
    return 0;
}