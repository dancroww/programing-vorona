#include "smartphone.h"

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const Smartphone& phone) {
    os << static_cast<const Phone&>(phone) << ", Price: " << phone.getPrice() << ", Diagonal: " << phone.getDiagonal();
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, Smartphone& phone) {
    std::string brand, model;
    float price, diagonal;
    is >> brand >> model >> price >> diagonal;
    phone = Smartphone(brand, model, price, diagonal);
    return is;
}
