#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "entity.h"

class Smartphone : public Phone {
private:
    float price;      // Ціна смартфона
    float diagonal;   // Діагональ екрану

public:
    // Конструктор
    Smartphone(const std::string& brand, const std::string& model, float price, float diagonal)
        : Phone(brand, model), price(price), diagonal(diagonal) {}

    // Перевизначення методів
    float getPrice() const override final { return price; }
    float getDiagonal() const override final { return diagonal; }

    // Оператори введення/виведення
    friend std::ostream& operator<<(std::ostream& os, const Smartphone& phone);
    friend std::istream& operator>>(std::istream& is, Smartphone& phone);
};

#endif // SMARTPHONE_H
