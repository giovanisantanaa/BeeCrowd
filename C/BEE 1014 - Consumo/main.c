#include <stdio.h>

int main() {

    int x;                          // Integer type variable
    float y;                        // Variable of type real

    scanf("%d", &x);                // Reads a value for x which is the distance in km
    scanf("%f", &y);                // Reads a value for y which is the total fuel used

    printf("%.3f km/l\n", x/y);     // Prints the average consumption of a car on the screen

    return 0;
}