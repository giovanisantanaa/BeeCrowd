#include <stdio.h>

int main() {

    int time, seconds, minutes, hour;                   // Integer variables with no initially defined value.

    scanf("%d", &time);                                 // Reads the time in seconds and stores it in the time variable.

    seconds = time % 60;                                // It does the remainder of the division of time by 60 to obtain the seconds and stores it in the seconds variable.
    time -= seconds;                                    // Decreases the seconds of the time and stores the new value in the time variable.
    time /= 60;                                         // Divide the time by 60 to only have the minutes in the time variable.

    minutes = time % 60;                                // It does the remainder of dividing the time by 60 to obtain the minutes and stores it in the minutes variable.
    time -= minutes;                                    // Decreases the minutes of time and stores the new value in the time variable.
    time /= 60;                                         // Divide the time by 60 to only have the hours in the time variable.

    hour = time;                                        // Stores the time in the hour variable.

    printf("%d:%d:%d\n", hour, minutes, seconds);       // Prints to the screen in the format hours:minutes:seconds

    return 0;
}