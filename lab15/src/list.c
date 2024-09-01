
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Ініціалізує динамічний масив CarList.
 * list - Вказівник на CarList.
 */
void initList(CarList *list) {
    list->size = 0;
    list->capacity = 2;
    list->data = (Car *)malloc(list->capacity * sizeof(Car));
}

/**
 * Звільняє пам'ять, зайняту масивом CarList.
 * list - Вказівник на CarList.
 */
void freeList(CarList *list) {
    free(list->data);
    list->size = 0;
    list->capacity = 0;
}

/**
 * Додає новий автомобіль до масиву CarList.
 * list - Вказівник на CarList.
 * car - Автомобіль для додавання.
 */
void addCar(CarList *list, Car car) {
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->data = (Car *)realloc(list->data, list->capacity * sizeof(Car));
    }
    list->data[list->size++] = car;
}

/**
 * Видаляє автомобіль з масиву CarList за індексом.
 * list - Вказівник на CarList.
 * index - Індекс автомобіля для видалення.
 */
void removeCar(CarList *list, size_t index) {
    if (index < list->size) {
        for (size_t i = index; i < list->size - 1; ++i) {
            list->data[i] = list->data[i + 1];
        }
        list->size--;
    }
}

/**
 * Виводить список автомобілів на екран.
 * list - Вказівник на CarList.
 */
void printList(const CarList *list) {
    for (size_t i = 0; i < list->size; ++i) {
        printf("Brand: %s, Model: %s, Year: %d, Price: %.2f\n",
               list->data[i].brand, list->data[i].model,
               list->data[i].year, list->data[i].price);
    }
}

/**
 * Порівнює два автомобілі за ціною.
 * a - Вказівник на перший автомобіль.
 * b - Вказівник на другий автомобіль.
 */
int compareByPrice(const void *a, const void *b) {
    Car *carA = (Car *)a;
    Car *carB = (Car *)b;
    return (carA->price > carB->price) - (carA->price < carB->price);
}

/**
 * Сортує автомобілі за ціною.
 * list - Вказівник на CarList.
 */
void sortListByPrice(CarList *list) {
    qsort(list->data, list->size, sizeof(Car), compareByPrice);
}

/**
 * Шукає автомобілі за маркою.
 * list - Вказівник на CarList.
 * brand - Марка автомобіля для пошуку.
 */
void searchByBrand(const CarList *list, const char *brand) {
    for (size_t i = 0; i < list->size; ++i) {
        if (strcmp(list->data[i].brand, brand) == 0) {
            printf("Brand: %s, Model: %s, Year: %d, Price: %.2f\n",
                   list->data[i].brand, list->data[i].model,
                   list->data[i].year, list->data[i].price);
        }
    }
}
