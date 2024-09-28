#include <stdio.h>

int main() {

    double r, volume, pi = 3.14159;         // Defining variables for radius, volume and for the value of pi which already has a predefined initial value

    scanf("%lf", &r);                       // Reads the radius value

    volume = (4.0/3)*pi*r*r*r;              // Calculate the volume of the sphere

    printf("VOLUME = %.3f\n", volume);      // Prints the volume of the sphere on the screen

    return 0;
}