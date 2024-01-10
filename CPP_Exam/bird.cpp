#include "bird.h"

void Bird::printInfo() const {
    Animal::printInfo(); 
    std::cout << "Wingspan: " << wingspan << " meters\n";
}