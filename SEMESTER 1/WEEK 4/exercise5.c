/*
Assuming the human rate is 75 beats per minute, write a program to ask a user their age in years and to calculate the number of beats their heart has made so far in their life.

Beatrice Maria Giurgica

10/10/2023
*/

#include <stdio.h>

int main()
{ 

    int age = 0;
    int user_life_heart_beats = 0;
    int beats_per_minute = 75;
    int minutes_in_1day = 1440;
    int daily_heart_beats = 0;
    int year_heart_beats = 0;


    printf("Enter your age\n", age);
    scanf("%d", &age);

    //Let's calculate the number of beats the user's heart has made in his/her life based on his/her age
    daily_heart_beats = beats_per_minute * minutes_in_1day;

    year_heart_beats = daily_heart_beats * 365; //we multiply the daily heart beats by 365, beacause there are 365 days in one year

    user_life_heart_beats = year_heart_beats * age;

    printf("The number of beats your heart has made in your life based on your age is %d", user_life_heart_beats);

    return 0;

}