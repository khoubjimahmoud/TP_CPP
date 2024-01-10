#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>
#include <iostream>

class Bird : public Animal {
public:
    Bird() : wingspan(0.0) {}

    Bird(std::string type,std::string name, std::string color, std::string diet, std::string habitat, std::string sounds,
         bool isPet, int age, double weight, double height, double wingspan)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan) {}

    Bird(const Bird& other)
        : Animal(other), wingspan(other.wingspan) {}

    double getWingspan() const { return wingspan; }
    void setWingspan(double newWingspan) { wingspan = newWingspan; }

    void printInfo() const override {
        
    }

private:
    double wingspan;
};

#endif
