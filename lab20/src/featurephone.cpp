#include "featurephone.h"

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const FeaturePhone& phone) {
    os << static_cast<const Phone&>(phone) << ", Price: " << phone.getPrice() << ", Diagonal: " << phone.getDiagonal();
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, FeaturePhone& phone) {
    std::string brand, model;
    float price, diagonal;
    is >> brand >> model >> price >> diagonal;
    phone = FeaturePhone(brand, model, price, diagonal);
    return is;
}
