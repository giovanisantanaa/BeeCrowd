#include <stdio.h>

int main() {

    char name[61];
    double salary, sales;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    printf("TOTAL = R$ %.2f\n", salary+(0.15*sales));

    return 0;
}