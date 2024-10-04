#include "entity.h"
#include <iostream>

// Конструктор за замовчуванням
Phone::Phone() : brand(""), model(""), price(0.0), diagonal(0.0) {
    std::cout << "Default constructor called\n";
}

// Конструктор з аргументами
Phone::Phone(const std::string& brand, const std::string& model, float price, float diagonal)
    : brand(brand), model(model), price(price), diagonal(diagonal) {
    std::cout << "Parameterized constructor called\n";
}

// Конструктор копіювання
Phone::Phone(const Phone& other)
    : brand(other.brand), model(other.model), price(other.price), diagonal(other.diagonal) {
    std::cout << "Copy constructor called\n";
}

// Деструктор
Phone::~Phone() {
    std::cout << "Destructor called for " << model << "\n";
}

// Реалізація гетерів
const std::string& Phone::getBrand() const { return brand; }
const std::string& Phone::getModel() const { return model; }
float Phone::getPrice() const { return price; }
float Phone::getDiagonal() const { return diagonal; }

// Реалізація сетерів
void Phone::setBrand(const std::string& brand) { this->brand = brand; }
void Phone::setModel(const std::string& model) { this->model = model; }
void Phone::setPrice(float price) { this->price = price; }
void Phone::setDiagonal(float diagonal) { this->diagonal = diagonal; }

// Метод для виведення інформації про телефон
void Phone::print() const {
    std::cout << "Phone: " << brand << " " << model << ", Price: " << price << ", Diagonal: " << diagonal << "\n";
}
