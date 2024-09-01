
#include "list.h"
#include "menu.h"
#include <stdio.h>

/**
 * Головна функція програми.
 * argc - Кількість аргументів командного рядка.
 * argv - Аргументи командного рядка.
 */
int main(int argc, char *argv[]) {
    CarList list;
    initList(&list);

    if (argc > 1) {
        readFromFile(&list, argv[1]);
    }

    handleUserInput(&list);

    freeList(&list);
    return 0;
}
