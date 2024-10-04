#include "entity.h"
#include <iostream>
#include <sstream>

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

// Гетери
const std::string& Phone::getBrand() const { return brand; }
const std::string& Phone::getModel() const { return model; }
float Phone::getPrice() const { return price; }
float Phone::getDiagonal() const { return diagonal; }

// Сетери
void Phone::setBrand(const std::string& brand) { this->brand = brand; }
void Phone::setModel(const std::string& model) { this->model = model; }
void Phone::setPrice(float price) { this->price = price; }
void Phone::setDiagonal(float diagonal) { this->diagonal = diagonal; }

// Метод для перетворення об'єкта в рядок
std::string Phone::toString() const {
    std::stringstream ss;
    ss << "Brand: " << brand << ", Model: " << model
       << ", Price: " << price << ", Diagonal: " << diagonal;
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

void Phone::print() const {
    std::cout << "Brand: " << brand << ", Model: " << model
              << ", Price: " << price << ", Diagonal: " << diagonal << std::endl;
}
