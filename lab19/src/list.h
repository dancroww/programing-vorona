#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <vector>
#include <iostream>

class List {
private:
    std::vector<Phone> phones;  // Вектор телефонів

public:
    // Конструктор за замовчуванням
    List();

    // Деструктор
    ~List();

    // Метод для додавання телефону
    void addPhone(const Phone& phone);

    // Метод для видалення телефону за індексом
    void removePhone(size_t index);

    // Перевантажений оператор індексування
    Phone& operator[](size_t index);

    // Оператори введення/виведення для файлів та потоків
    friend std::ostream& operator<<(std::ostream& os, const List& list);
    friend std::istream& operator>>(std::istream& is, List& list);

    void print() const;
    const Phone& findCheapestPhone(float diagonal) const;

    // Читання списку з файлу
    void readFromFile(const std::string& fileName);

    // Запис списку в файл
    void writeToFile(const std::string& fileName) const;
};

#endif // LIST_H
