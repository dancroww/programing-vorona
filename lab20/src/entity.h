#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>

class Phone {
private:
    std::string brand; // Назва бренду телефону
    std::string model; // Модель телефону

public:
    // Конструктор за замовчуванням
    Phone(const std::string& brand = "", const std::string& model = "") 
        : brand(brand), model(model) {}

    // Віртуальний деструктор
    virtual ~Phone() = default;

    // Абстрактні методи
    virtual float getPrice() const = 0; // Метод для отримання ціни
    virtual float getDiagonal() const = 0; // Метод для отримання діагоналі

    // Гетери
    const std::string& getBrand() const { return brand; }
    const std::string& getModel() const { return model; }

    // Оператори введення/виведення
    friend std::ostream& operator<<(std::ostream& os, const Phone& phone);
    friend std::istream& operator>>(std::istream& is, Phone& phone);
};

#endif // ENTITY_H
