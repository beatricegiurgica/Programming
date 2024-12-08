/*
Design structure templates to store data as follows:
Airline name, Flight number, Passenger surname, Seat number, destination, no of bags
Using functions only, your program must:
a) Enter the travel information for 2 passengers
b) Display the data for each passenger

Beatrice Maria Giurgica 

19/03/2024
*/

#include <stdio.h> 
#include <string.h>


struct booking
{
    char airline_name[50];
    int flight_number;
    char passanger_surname[50];        
    int seat_number;
    char destination[50];
    int number_of_bags;
};


int main()
{
    struct booking passanger1, passanger2;

    //Enter the data for person1 from standard input
    printf("\nPassanger 1");
    printf("\nEnter the airline name: ");
    scanf("%s", passanger1.airline_name);

    printf("\nEnter your flight number: ");
    scanf("%d", &passanger1.flight_number);

    printf("\nEnter your surname: ");
    scanf("%s", passanger1.passanger_surname);

    printf("\nEnter your seat number: ");
    scanf("%d", &passanger1.seat_number);

    printf("\nEnter your destination: ");
    scanf("%s", passanger1.destination);

    printf("\nEnter your number of bags: ");
    scanf("%d", &passanger1.number_of_bags);

    //Display the passanger's booking data
    printf("\nPassanger 1");
    printf("\nAirline name is: %s", passanger1.airline_name);
    printf("\nFlight number is: %d", passanger1.flight_number);
    printf("\nPassanger surname is: %s", passanger1.passanger_surname);
    printf("\nSeat number is: %d", passanger1.seat_number);
    printf("\nDestination is: %s", passanger1.destination);
    printf("\nNumber of bags is: %d", passanger1.number_of_bags);


    //Copy passanger1's data to passanger2
    passanger2 = passanger1;

    //Enter the data for person1 from standard input
    printf("\n\nPassanger 2");
    printf("\nEnter the airline name: ");
    scanf("%s", passanger2.airline_name);

    printf("\nEnter your flight number: ");
    scanf("%d", &passanger2.flight_number);

    printf("\nEnter your surname: ");
    scanf("%s", passanger2.passanger_surname);

    printf("\nEnter your seat number: ");
    scanf("%d", &passanger2.seat_number);

    printf("\nEnter your destination: ");
    scanf("%s", passanger2.destination);

    printf("\nEnter your number of bags: ");
    scanf("%d", &passanger2.number_of_bags);

    //Display the passanger's booking data
    printf("\nPassanger 2");
    printf("\nAirline name is: %s", passanger2.airline_name);
    printf("\nFlight number is: %d", passanger2.flight_number);
    printf("\nPassanger surname is: %s", passanger2.passanger_surname);
    printf("\nSeat number is: %d", passanger2.seat_number);
    printf("\nDestination is: %s", passanger2.destination);
    printf("\nNumber of bags is: %d", passanger2.number_of_bags);
    
    return 0;
}