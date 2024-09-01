#ifndef LIB_H
#define LIB_H

#define MATRIX_SIZE 3

void print_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE]);
void read_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE]);
void inverse_matrix(double matrix[MATRIX_SIZE][MATRIX_SIZE], double result[MATRIX_SIZE][MATRIX_SIZE]);
void write_matrix_to_file(double matrix[MATRIX_SIZE][MATRIX_SIZE], const char *filename);
void read_matrix_from_file(double matrix[MATRIX_SIZE][MATRIX_SIZE], const char *filename);

#endif /* LIB_H */