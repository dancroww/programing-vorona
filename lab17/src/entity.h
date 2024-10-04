#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Phone {
private:
    std::string brand;    // Назва бренду телефону
    std::string model;    // Модель телефону
    float price;          // Ціна телефону
    float diagonal;       // Діагональ екрана телефону

public:
    // Конструктор за замовчуванням
    Phone();

    // Конструктор з аргументами
    Phone(const std::string& brand, const std::string& model, float price, float diagonal);

    // Конструктор копіювання
    Phone(const Phone& other);

    // Деструктор
    ~Phone();

    // Гетери для доступу до приватних полів
    const std::string& getBrand() const;
    const std::string& getModel() const;
    float getPrice() const;
    float getDiagonal() const;

    // Сетери для встановлення значень полів
    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setPrice(float price);
    void setDiagonal(float diagonal);

    // Метод для виведення інформації про телефон
    void print() const;
};

#endif // ENTITY_H
