#include "entity.h"
#include <sstream>
#include <iostream>

// Конструктор за замовчуванням
Phone::Phone() : brand(""), model(""), price(0.0), diagonal(0.0) {}

// Конструктор з аргументами
Phone::Phone(const std::string& brand, const std::string& model, float price, float diagonal)
    : brand(brand), model(model), price(price), diagonal(diagonal) {}

// Конструктор копіювання
Phone::Phone(const Phone& other)
    : brand(other.brand), model(other.model), price(other.price), diagonal(other.diagonal) {}

// Оператор присвоєння
Phone& Phone::operator=(const Phone& other) {
    if (this != &other) {
        brand = other.brand;
        model = other.model;
        price = other.price;
        diagonal = other.diagonal;
    }
    return *this;
}

// Оператор == для порівняння
bool Phone::operator==(const Phone& other) const {
    return brand == other.brand && model == other.model &&
           price == other.price && diagonal == other.diagonal;
}

// Оператор != для порівняння
bool Phone::operator!=(const Phone& other) const {
    return !(*this == other);
}

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const Phone& phone) {
    os << "Brand: " << phone.brand << ", Model: " << phone.model
       << ", Price: " << phone.price << ", Diagonal: " << phone.diagonal;
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, Phone& phone) {
    is >> phone.brand >> phone.model >> phone.price >> phone.diagonal;
    return is;
}

// Гетери та сетери
const std::string& Phone::getBrand() const { return brand; }
const std::string& Phone::getModel() const { return model; }
float Phone::getPrice() const { return price; }
float Phone::getDiagonal() const { return diagonal; }

void Phone::setBrand(const std::string& brand) { this->brand = brand; }
void Phone::setModel(const std::string& model) { this->model = model; }
void Phone::setPrice(float price) { this->price = price; }
void Phone::setDiagonal(float diagonal) { this->diagonal = diagonal; }

// Метод для перетворення об'єкта в рядок
std::string Phone::toString() const {
    std::stringstream ss;
    ss << brand << " " << model << " " << price << " " << diagonal;
    return ss.str();
}

// Метод для створення об'єкта з рядка
Phone Phone::fromString(const std::string& str) {
    std::stringstream ss(str);
    std::string brand, model;
    float price, diagonal;
    ss >> brand >> model >> price >> diagonal;
    return Phone(brand, model, price, diagonal);
}
