#include "list.h"
#include <fstream>
#include <stdexcept>
#include <iostream>

// Конструктор за замовчуванням
List::List() {}

// Деструктор
List::~List() {}

// Додавання нового телефону
void List::addPhone(const Phone& phone) {
    phones.push_back(phone);
}

// Видалення телефону за індексом
void List::removePhone(size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    phones.erase(phones.begin() + index);
}

void List::print() const {
    for (const auto& phone : phones) {
        phone.print(); // Виклик методу print() для кожного телефону
    }
}

const Phone& List::findCheapestPhone(float diagonal) const {
    // Пошук найдешевшого телефону з заданою діагоналлю
    const Phone* cheapestPhone = nullptr;

    for (const auto& phone : phones) {
        if (phone.getDiagonal() == diagonal) {
            if (!cheapestPhone || phone.getPrice() < cheapestPhone->getPrice()) {
                cheapestPhone = &phone; // Зберігаємо адресу найдешевшого телефону
            }
        }
    }

    if (cheapestPhone) {
        return *cheapestPhone; // Повертаємо найдешевший телефон
    }

    throw std::runtime_error("No phone found with the specified diagonal."); // Викидаємо помилку, якщо не знайдено
}

// Оператор індексування
Phone& List::operator[](size_t index) {
    if (index >= phones.size()) throw std::out_of_range("Index out of range");
    return phones[index];
}

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const List& list) {
    for (const auto& phone : list.phones) {
        os << phone << "\n";
    }
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, List& list) {
    Phone phone;
    while (is >> phone) {
        list.addPhone(phone);
    }
    return is;
}

// Читання списку з файлу
void List::readFromFile(const std::string& fileName) {
    std::ifstream file(fileName);
    if (!file) throw std::runtime_error("Failed to open file");

    phones.clear();  // Очищаємо список перед читанням нових даних
    Phone phone;
    while (file >> phone) {
        phones.push_back(phone);
    }

    file.close();
}

// Запис списку телефонів у файл
void List::writeToFile(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (!file) throw std::runtime_error("Failed to open file");

    for (const auto& phone : phones) {
        file << phone << "\n";
    }

    file.close();
}
