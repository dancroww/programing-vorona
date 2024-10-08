
#include "lib.h"


void extract_diagonal(int *matrix, int n, int *diagonal) {
    for (int i = 0; i < n; i++) {
        *(diagonal + i) = *(matrix + i * n + i);
    }
}


void sort_array(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}
