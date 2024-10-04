#ifndef FEATUREPHONE_H
#define FEATUREPHONE_H

#include "entity.h"

class FeaturePhone : public Phone {
private:
    float price;      // Ціна функціонального телефону
    float diagonal;   // Діагональ екрану

public:
    // Конструктор
    FeaturePhone(const std::string& brand, const std::string& model, float price, float diagonal)
        : Phone(brand, model), price(price), diagonal(diagonal) {}

    // Перевизначення методів
    float getPrice() const override final { return price; }
    float getDiagonal() const override final { return diagonal; }

    // Оператори введення/виведення
    friend std::ostream& operator<<(std::ostream& os, const FeaturePhone& phone);
    friend std::istream& operator>>(std::istream& is, FeaturePhone& phone);
};

#endif // FEATUREPHONE_H
