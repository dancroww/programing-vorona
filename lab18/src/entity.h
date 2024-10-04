#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <sstream>

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

    // Гетери
    const std::string& getBrand() const;
    const std::string& getModel() const;
    float getPrice() const;
    float getDiagonal() const;

    // Сетери
    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setPrice(float price);
    void setDiagonal(float diagonal);

    // Метод для перетворення об'єкта в рядок
    std::string toString() const;

    // Метод для створення об'єкта з рядка
    static Phone fromString(const std::string& str);

	void print() const;
};

#endif // ENTITY_H
