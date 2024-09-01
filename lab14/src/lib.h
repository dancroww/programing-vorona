#ifndef LIB_H
#define LIB_H

/**
 * Структура, що представляє автомобіль
 */
typedef struct {
    char brand[50];   /**< Марка автомобіля */
    char model[50];   /**< Модель автомобіля */
    int year;         /**< Рік випуску автомобіля */
    double price;     /**< Ціна автомобіля */
} Car;

/**
 * Читає дані з текстового файлу
 * 
 * filename - Ім'я файлу для читання
 * cars - Масив структур Car
 * count - Кількість прочитаних записів
 */
void readData(const char *filename, Car *cars, int *count);

/**
 * Записує дані у текстовий файл
 * 
 * filename - Ім'я файлу для запису
 * cars - Масив структур Car
 * count - Кількість записів для запису
 */
void writeData(const char *filename, Car *cars, int count);

/**
 * Виводить дані на екран
 * 
 * cars - Масив структур Car
 * count - Кількість записів для виведення
 */
void printData(Car *cars, int count);

/**
 * Шукає автомобілі за маркою
 * 
 * cars - Масив структур Car
 * count - Кількість записів
 * brand - Марка автомобіля для пошуку
 */
void searchByBrand(Car *cars, int count, const char *brand);

/**
 * Сортує автомобілі за ціною
 * 
 * cars - Масив структур Car
 * count - Кількість записів для сортування
 */
void sortCarsByPrice(Car *cars, int count);

/**
 * Генерує випадковий автомобіль
 * 
 * car - Вказівник на структуру Car
 * variant - Варіант генерації
 */
void generateCar(Car *car, int variant);

/**
 * Записує дані у бінарний файл
 * 
 * filename - Ім'я файлу для запису
 * cars - Масив структур Car
 * count - Кількість записів для запису
 */
void writeDataBinary(const char *filename, Car *cars, int count);

/**
 * Читає дані з бінарного файлу
 * 
 * filename - Ім'я файлу для читання
 * cars - Масив структур Car
 * count - Кількість прочитаних записів
 */
void readDataBinary(const char *filename, Car *cars, int *count);

#endif // LIB_H
