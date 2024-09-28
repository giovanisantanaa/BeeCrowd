#include <stdio.h>

int main() {

    int piece_1, piece_2, number_of_pieces_1, number_of_pieces_2;
    float unit_value_1, unit_value_2, final_value;

    scanf("%d %d %f", &piece_1, &number_of_pieces_1, &unit_value_1);
    scanf("%d %d %f", &piece_2, &number_of_pieces_2, &unit_value_2);

    final_value = (number_of_pieces_1*unit_value_1)+(number_of_pieces_2*unit_value_2);

    printf("VALOR A PAGAR: R$ %.2f\n", final_value);

    return 0;
}