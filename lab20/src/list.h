#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include "smartphone.h"
#include "featurephone.h"
#include <vector>
#include <iostream>
#include <memory>

class List {
private:
    std::vector<std::unique_ptr<Phone>> phones; // Вектор унікальних вказівників на базовий клас

public:
    // Конструктор за замовчуванням
    List();

    // Деструктор
    ~List();

    // Метод для додавання телефону
    void addPhone(std::unique_ptr<Phone> phone);

    // Метод для видалення телефону за індексом
    void removePhone(size_t index);

    // Перевантажений оператор індексування
    Phone& operator[](size_t index);

    // Оператори введення/виведення для файлів та потоків
    friend std::ostream& operator<<(std::ostream& os, const List& list);
    friend std::istream& operator>>(std::istream& is, List& list);

    // Читання списку з файлу
    void readFromFile(const std::string& fileName);

    // Запис списку в файл
    void writeToFile(const std::string& fileName) const;
};

#endif // LIST_H
