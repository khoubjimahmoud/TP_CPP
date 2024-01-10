#include "reptile.h"

void Reptile::printInfo() const {
    Animal::printInfo(); 
    std::cout << "Scale Pattern: " << scalePattern << "\n";
}