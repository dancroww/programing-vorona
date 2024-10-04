#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <fstream>
#include <vector>

class List {
private:
    std::vector<Phone> phones;  // Масив телефонів

public:
    // Конструктор за замовчуванням
    List();

    // Деструктор
    ~List();

    // Метод для додавання телефону
    void addPhone(const Phone& phone);

    // Метод для видалення телефону за індексом
    void removePhone(size_t index);

    // Метод для отримання телефону за індексом
    Phone& getPhone(size_t index);

    // Метод для виведення всіх телефонів
    void print() const;

    // Метод для пошуку найдешевшого телефону з певною діагоналлю
    const Phone& findCheapestPhone(float diagonal) const;

    // Читання списку з файлу
    void readFromFile(const std::string& fileName);

    // Запис списку в файл
    void writeToFile(const std::string& fileName) const;
};

#endif // LIST_H
