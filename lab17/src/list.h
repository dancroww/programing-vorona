#ifndef LIST_H
#define LIST_H

#include "entity.h"

// Клас для роботи зі списком телефонів
class List {
private:
    Phone* phones;  // Динамічний масив об'єктів Phone
    size_t size;    // Поточний розмір масиву

public:
    // Конструктор за замовчуванням
    List();

    // Деструктор
    ~List();

    // Метод для додавання телефону
    void addPhone(const Phone& phone, size_t pos = 0);

    // Метод для видалення телефону за індексом
    void removePhone(size_t index);

    // Метод для отримання телефону за індексом
    Phone& getPhone(size_t index);

    // Метод для виведення всіх телефонів
    void print() const;

    // Метод для пошуку найдешевшого телефону з певною діагоналлю
    const Phone& findCheapestPhone(float diagonal) const;
};

#endif // LIST_H
