#include <stdio.h>

int main() {

    int number, hour;
    float salary;

    scanf("%d", &number);
    scanf("%d", &hour);
    scanf("%f", &salary);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, hour*salary);

    return 0;
}