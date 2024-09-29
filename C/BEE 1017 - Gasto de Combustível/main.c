#include <stdio.h>

int main() {

    int time, avrg_speed;                   // Integer variables time and avrg_speed without initial declaration
    double liters;                          // Floating point variable liters without initial declaration
    const double km_l = 12.0;               // Floating point constant variable with declared value 12.0

    scanf("%d", &time);                     // Reads the time spent and stores it in the time variable
    scanf("%d", &avrg_speed);               // Reads the average speed and stores it in the avrg_speed variable

    liters = time * avrg_speed / km_l;      // Calculates the amount of liters needed to make the trip and stores it in the liters variable.

    printf("%.3f\n", liters);                 // Prints the value of the liters variable on the screen with 3 decimal places

    return 0;
}