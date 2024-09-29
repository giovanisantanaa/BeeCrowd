#include <stdio.h>

int main() {

    int value;                                          // Integer type variable without declared value

    scanf("%d", &value);                                // Reads an integer value into the value variable
    
    printf("%d\n", value);                              // Prints the value of the variable value on the screen
    
    printf("%d nota(s) de R$ 100,00\n", value/100);    // Imprime a quantidade minimas de notas de 100
    value %= 100;                                       // Divide the remainder by 100 to get the remaining amount other than the 100 notes.

    printf("%d nota(s) de R$ 50,00\n", value/50);      // Prints the minimum amount of R$100 notes
    value %= 50;                                        // Divide the remainder by 50 to get the remaining amount other than the 50 notes.

    printf("%d nota(s) de R$ 20,00\n", value/20);      // Prints the minimum amount of R$50 notes
    value %= 20;                                        // Divide the remainder by 20 to get the remaining amount other than the 20 notes.

    printf("%d nota(s) de R$ 10,00\n", value/10);      // Prints the minimum amount of R$20 notes
    value %= 10;                                        // Divide the remainder by 10 to get the remaining amount other than the 10 notes.

    printf("%d nota(s) de R$ 5,00\n", value/5);        // Prints the minimum amount of R$10 notes
    value %= 5;                                         // Divide the remainder by 5 to get the remaining amount other than the 5 notes.

    printf("%d nota(s) de R$ 2,00\n", value/2);        // Prints the minimum amount of R$5 notes
    value %= 2;                                         // Divide the remainder by 2 to get the remaining amount other than the 2 notes.

    printf("%d nota(s) de R$ 1,00\n", value);          // Prints the minimum amount of R$1 notes

    return 0;
}