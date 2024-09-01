#include <stdio.h>
#include "lib.h"

int main() {
    printf("Лабораторна робота №11. Взаємодія з користувачем шляхом механізму введення/виведення\n");

    double input_matrix[MATRIX_SIZE][MATRIX_SIZE];
    double inverse_result[MATRIX_SIZE][MATRIX_SIZE];

    read_matrix(input_matrix);

    printf("Input matrix:\n");
    print_matrix(input_matrix);

    inverse_matrix(input_matrix, inverse_result);

    printf("Inverse matrix:\n");
    print_matrix(inverse_result);

    return 0;
}
