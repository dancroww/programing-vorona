#include <iostream>
#include "list.h"

int main() {
    List phoneList;

    // Додавання смартфонів
    phoneList.addPhone(std::make_unique<Smartphone>("Apple", "iPhone 14", 999.99, 6.1));
    phoneList.addPhone(std::make_unique<Smartphone>("Samsung", "Galaxy S22", 799.99, 6.2));

    // Вивід усіх телефонів
    std::cout << "Phone List:\n" << phoneList;

    // Запис у файл
    phoneList.writeToFile("phones.txt");

    // Читання з файлу
    List newPhoneList;
    newPhoneList.readFromFile("phones.txt");
    std::cout << "\nNew Phone List from File:\n" << newPhoneList;

    return 0;
}
