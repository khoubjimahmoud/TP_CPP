#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>
#include <iostream>

class Mammal : public Animal {
public:
    Mammal() : furColor("") {}

    Mammal(std::string type,std::string name, std::string color, std::string diet, std::string habitat, std::string sounds,
           bool isPet, int age, double weight, double height, std::string furColor)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

    std::string getFurColor() const { return furColor; }
    void setFurColor(const std::string& newFurColor) { furColor = newFurColor; }

    void printInfo() const override {
    }


private:
    std::string furColor;
};

#endif
