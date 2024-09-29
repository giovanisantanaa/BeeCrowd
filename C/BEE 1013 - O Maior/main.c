#include <stdio.h>
#include <stdlib.h>                             // Library for using the abs() function

int main() {

    int a, b, c;                                // Variables a, b and c of integer type declared without initial value
    int larger, largerAB;                       // Variables created to store the largest value between three numbers

    scanf("%d %d %d", &a, &b, &c);              // Read three integers for variables a, b and c respectively

    largerAB = (a+b+abs(a-b))/2;                // Calculate the highest value between a and b
    larger = (largerAB+c+abs(largerAB-c))/2;    // Calculates the highest value between the variable largerAB and the variable c

    printf("%d eh o maior\n", larger);          // Prints the highest value among the three numbers on the screen

    return 0;
}