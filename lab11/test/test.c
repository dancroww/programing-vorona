#include <stdio.h>
#include "../src/lib.h"

int main() {
    double input_matrix[MATRIX_SIZE][MATRIX_SIZE] = {
        {2, -3, 1},
        {1, 1, 0},
        {3, 2, 2}
    };

    double inverse_result[MATRIX_SIZE][MATRIX_SIZE];

    printf("Input matrix:\n");
    print_matrix(input_matrix);

    inverse_matrix(input_matrix, inverse_result);

    printf("Inverse matrix calculated by the program:\n");
    print_matrix(inverse_result);

    return 0;
}