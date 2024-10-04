#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>

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

    // Оператор присвоєння
    Phone& operator=(const Phone& other);

    // Оператори порівняння
    bool operator==(const Phone& other) const;
    bool operator!=(const Phone& other) const;

    // Оператори введення/виведення
    friend std::ostream& operator<<(std::ostream& os, const Phone& phone);
    friend std::istream& operator>>(std::istream& is, Phone& phone);

    // Гетери та сетери
    const std::string& getBrand() const;
    const std::string& getModel() const;
    float getPrice() const;
    float getDiagonal() const;

    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setPrice(float price);
    void setDiagonal(float diagonal);

    // Метод для перетворення об'єкта в рядок
    std::string toString() const;

    // Метод для створення об'єкта з рядка
    static Phone fromString(const std::string& str);

 	void print() const {
        std::cout << "Brand: " << brand << ", Model: " << model 
                  << ", Price: " << price << ", Diagonal: " << diagonal << std::endl;
    }

};

#endif // ENTITY_H
