#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, distance;                    // Floating point variables x1, x2, y1, y2 and distance to calculate the distance between two points

    scanf("%lf %lf", &x1, &y1);                         // Reads values ​​for point p(x1, y1)
    scanf("%lf %lf", &x2, &y2);                         // Reads values ​​for point p(x2, y2)

    distance = sqrt(pow((x2-x1), 2) + pow(y2-y1, 2));   // Calculates the distance between two points

    printf("%.4f\n", distance);                         // Prints the distance on the screen

    return 0;
}