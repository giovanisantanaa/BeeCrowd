#include <stdio.h>

int main() {

    double a, b, c, pi = 3.14159;                       // Variables a, b and c created receive floating point values ​​and the variable pi which already has an initial value declared.

    scanf("%lf %lf %lf", &a, &b, &c);                      // Reads the values ​​of a, b and c.

    // Prints the shape and its respective area based on the values ​​entered for a, b and c.
    printf("TRIANGULO: %.3f\n", (a*c)/2);                 
    printf("CIRCULO: %.3f\n", pi*c*c);
    printf("TRAPEZIO: %.3f\n", ((a+b)*c)/2);
    printf("QUADRADO: %.3f\n", b*b);
    printf("RETANGULO: %.3f\n", a*b);

    return 0;
}