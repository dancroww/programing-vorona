#include "list.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

// Конструктор за замовчуванням
List::List() {
    std::cout << "List default constructor called\n";
}

// Деструктор
List::~List() {
    std::cout << "List destructor called\n";
}

// Додавання нового телефону
void List::addPhone(const Phone& phone) {
    phones.push_back(phone);
}

// Видалення телефону за індексом
void List::removePhone(size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    phones.erase(phones.begin() + index);
}

// Отримання телефону за індексом
Phone& List::getPhone(size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    return phones[index];
}

// Виведення всіх телефонів
void List::print() const {
    for (const auto& phone : phones) {
        std::cout << phone.toString() << "\n";
    }
}

// Пошук найдешевшого телефону з певною діагоналлю
const Phone& List::findCheapestPhone(float diagonal) const {
    size_t cheapestIndex = 0;
    bool found = false;

    for (size_t i = 0; i < phones.size(); ++i) {
        if (phones[i].getDiagonal() == diagonal) {
            if (!found || phones[i].getPrice() < phones[cheapestIndex].getPrice()) {
                cheapestIndex = i;
                found = true;
            }
        }
    }

    if (!found) throw std::runtime_error("Phone with given diagonal not found");
    return phones[cheapestIndex];
}

// Читання списку телефонів з файлу
void List::readFromFile(const std::string& fileName) {
    std::ifstream file(fileName);

    if (!file) throw std::runtime_error("Failed to open file");

    phones.clear();  // Очищаємо список перед читанням нових даних

    std::string line;
    while (std::getline(file, line)) {
        phones.push_back(Phone::fromString(line));
    }

    file.close();
}

// Запис списку телефонів у файл
void List::writeToFile(const std::string& fileName) const {
    std::ofstream file(fileName);

    if (!file) throw std::runtime_error("Failed to open file");

    for (const auto& phone : phones) {
        file << phone.toString() << "\n";
    }

    file.close();
}
