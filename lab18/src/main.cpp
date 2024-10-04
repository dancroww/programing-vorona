#include "list.h"
#include "iostream"

int main() {
    // Створення кількох телефонів
    Phone phone1("Samsung", "Galaxy S21", 999.99, 6.2);
    Phone phone2("Apple", "iPhone 12", 1099.99, 6.1);
    Phone phone3("Xiaomi", "Mi 11", 749.99, 6.8);

    // Створення списку телефонів
    List phoneList;

    // Додавання телефонів
    phoneList.addPhone(phone1);
    phoneList.addPhone(phone2);
    phoneList.addPhone(phone3);

    // Виведення всіх телефонів
    std::cout << "Phone list:\n";
    phoneList.print();

    // Видалення одного телефона
    phoneList.removePhone(1);  // Видаляємо iPhone

    std::cout << "\nPhone list after removal:\n";
    phoneList.print();

    // Пошук найдешевшого телефона з певною діагоналлю
    try {
        const Phone& cheapestPhone = phoneList.findCheapestPhone(6.2);
        std::cout << "\nCheapest phone with 6.2 diagonal:\n";
        cheapestPhone.print();
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}
