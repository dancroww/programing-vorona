
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * Головна функція програми.
 * argc - Кількість аргументів командного рядка.
 * argv - Аргументи командного рядка.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Unable to open file");
        return 1;
    }

    CarList list;
    initList(&list);

    Car car;
    while (fscanf(file, "%49s %49s %d %lf", car.brand, car.model, &car.year, &car.price) == 4) {
        addCar(&list, car);
    }
    fclose(file);

    printf("Initial list:\n");
    printList(&list);

    printf("\nSearching for brand 'Ford':\n");
    searchByBrand(&list, "Ford");

    printf("\nSorting cars by price:\n");
    sortListByPrice(&list);
    printList(&list);

    freeList(&list);
    return 0;
}

