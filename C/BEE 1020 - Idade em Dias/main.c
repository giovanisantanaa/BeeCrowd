#include <stdio.h>

int main() {

    int age, years, month, days;                    // Integer type variables without initial declaration

    scanf("%d", &age);                              // Reads the age in days and stores it in the age variable

    years = age / 365;                              // Divide the age in days by 365 to get the years and store it in the years variable
    age %= 365;                                     // Do the remainder of dividing the age in days by 365 to remove the years and save the new value in the age variable
    month = age / 30;                               // Divide the age in days by 30 to get the months and store it in the month variable
    age %= 30;                                      // Do the remainder of the division of the age in days by 30 to remove the months and leave only the days and save the new value in the age variable
    days = age;                                     // Store the value of the age variable in the days variable

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, month, days);      // Prints the year, month and days on the screen

    return 0;
}