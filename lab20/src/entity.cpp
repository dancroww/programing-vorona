#include "entity.h"
#include "smartphone.h"

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const Phone& phone) {
    os << "Brand: " << phone.getBrand() << ", Model: " << phone.getModel();
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, Phone& phone) {
    std::string brand, model;
	  float price, diagonal;
    // Читання інформації з потоку
	is >> brand >> model >> price >> diagonal;
   
 phone = Smartphone(brand, model, price, diagonal); // Додати логіку для створення об'єкта Phone
    return is;
}
