
#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <stdio.h>

/**
 * Структура для зберігання односпрямованого списку автомобілів.
 */
typedef struct {
    Car* head; /**< Вказівник на перший елемент списку. */
} CarList;

void initList(CarList *list);
void freeList(CarList *list);
void addCar(CarList *list, Car car);
void removeCar(CarList *list, size_t index);
void printList(const CarList *list);
void sortListByPrice(CarList *list);
void searchByBrand(const CarList *list, const char *brand);
void readFromFile(CarList *list, const char *filename);
void writeToFile(const CarList *list, const char *filename);

#endif // LIST_H
