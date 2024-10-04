#include "list.h"
#include <iostream>
#include <stdexcept>

// Конструктор за замовчуванням, ініціалізація масиву телефонів
List::List() : phones(nullptr), size(0) {
    std::cout << "List default constructor called\n";
}

// Деструктор для звільнення пам'яті
List::~List() {
    delete[] phones;
    std::cout << "List destructor called\n";
}

// Метод для додавання нового телефону в масив
void List::addPhone(const Phone& phone, size_t pos) {
    Phone* newPhones = new Phone[size + 1];  // Створюємо новий масив на 1 більший
    for (size_t i = 0; i < size; ++i) {      // Копіюємо старі телефони в новий масив
        newPhones[i] = phones[i];
    }
    newPhones[size] = phone;  // Додаємо новий телефон в кінець масиву
    delete[] phones;          // Звільняємо старий масив
    phones = newPhones;       // Присвоюємо новий масив
    ++size;                   // Збільшуємо розмір
}

// Метод для видалення телефону за індексом
void List::removePhone(size_t index) {
    if (index >= size) return;  // Перевірка на валідність індексу

    Phone* newPhones = new Phone[size - 1];  // Створюємо новий масив на 1 менший
    for (size_t i = 0, j = 0; i < size; ++i) {  // Копіюємо всі елементи, крім видаленого
        if (i != index) {
            newPhones[j++] = phones[i];
        }
    }
    delete[] phones;  // Звільняємо пам'ять старого масиву
    phones = newPhones;  // Присвоюємо новий масив
    --size;  // Зменшуємо розмір
}

// Метод для отримання телефону за індексом
Phone& List::getPhone(size_t index) {
    if (index >= size) throw std::out_of_range("Index out of range");  // Перевірка на вихід за межі
    return phones[index];  // Повертаємо телефон
}

// Метод для виведення всіх телефонів у списку
void List::print() const {
    for (size_t i = 0; i < size; ++i) {
        phones[i].print();  // Викликаємо метод print кожного телефону
    }
}

// Метод для пошуку найдешевшого телефону з певною діагоналлю
const Phone& List::findCheapestPhone(float diagonal) const {
    size_t cheapestIndex = 0;
    bool found = false;

    // Перебираємо всі телефони
    for (size_t i = 0; i < size; ++i) {
        if (phones[i].getDiagonal() == diagonal) {  // Шукаємо телефони з потрібною діагоналлю
            if (!found || phones[i].getPrice() < phones[cheapestIndex].getPrice()) {
                cheapestIndex = i;  // Оновлюємо індекс найдешевшого
                found = true;
            }
        }
    }

    // Якщо не знайшли жодного телефону з такою діагоналлю, кидаємо виняток
    if (!found) throw std::runtime_error("Phone with given diagonal not found");
    return phones[cheapestIndex];  // Повертаємо найдешевший телефон
}

