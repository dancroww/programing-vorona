#include "list.h"
#include <fstream>
#include <stdexcept>
#include <iostream>
#include <sstream>

// Конструктор за замовчуванням
List::List() {}

// Деструктор
List::~List() {}

// Додавання нового телефону
void List::addPhone(std::unique_ptr<Phone> phone) {
    phones.push_back(std::move(phone));
}

// Видалення телефону за індексом
void List::removePhone(size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    phones.erase(phones.begin() + index);
}

// Оператор індексування
Phone& List::operator[](size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    return *phones[index]; // Повертаємо об'єкт за посиланням
}

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const List& list) {
    for (const auto& phone : list.phones) {
        os << *phone << "\n";
    }
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, List& list) {
    // Можна реалізувати логіку для вводу телефону
    return is;
}

// Читання списку з файлу
void List::readFromFile(const std::string& fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) throw std::runtime_error("Could not open file");

    // Очищення попередніх даних
    phones.clear();

    std::string line;
    while (std::getline(file, line)) {
        // Припустимо, що рядок має формат: brand model price diagonal
        std::istringstream iss(line);
        std::string brand, model;
        float price, diagonal;
        iss >> brand >> model >> price >> diagonal;

        // Додаємо новий телефон
        addPhone(std::make_unique<Smartphone>(brand, model, price, diagonal));
    }

    file.close();
}

// Запис списку в файл
void List::writeToFile(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (!file.is_open()) throw std::runtime_error("Could not open file");

    for (const auto& phone : phones) {
        file << *phone << "\n"; // Використовуємо оператор виведення
    }

    file.close();
}
