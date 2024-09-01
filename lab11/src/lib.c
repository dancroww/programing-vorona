#include "lib.h"
#include <stdio.h>

void print_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        printf("[ ");
        for (int j = 0; j < MATRIX_SIZE; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("]\n");
    }
}

void read_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    printf("Enter %d x %d matrix:\n", MATRIX_SIZE, MATRIX_SIZE);
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
}

void inverse_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE], double result[MATRIX_SIZE][MATRIX_SIZE]) {
    double temp;

    // Ініціалізуємо одиничну матрицю як початкове значення зворотної матриці
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            if (i == j)
                result[i][j] = 1.0;
            else
                result[i][j] = 0.0;
        }
    }
    
    // Прямий хід методу Гаусса-Жордана
    for (int i = 0; i < MATRIX_SIZE; i++) {
        temp = matrix[i][i];
        for (int j = 0; j < MATRIX_SIZE; j++) {
            matrix[i][j] /= temp;
            result[i][j] /= temp;
        }
        for (int k = 0; k < MATRIX_SIZE; k++) {
            if (k != i) {
                temp = matrix[k][i];
                for (int j = 0; j < MATRIX_SIZE; j++) {
                    matrix[k][j] -= matrix[i][j] * temp;
                    result[k][j] -= result[i][j] * temp;
                }
            }
        }
    }
}