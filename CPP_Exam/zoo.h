#ifndef ZOO_H
#define ZOO_H

#include <string>
#include <vector>
#include "Animal.h"

class Zoo {
public:
    Zoo() : name(""), animals(std::vector<Animal*>()) {}

    explicit Zoo(const std::string& zooName) : name(zooName), animals(std::vector<Animal*>()) {}

    Zoo(const std::string& zooName, const std::vector<Animal*>& zooAnimals)
        : name(zooName), animals(zooAnimals) {}

    std::string getName() const { return name; }
    void setName(const std::string& newName) { name = newName; }

    void listAnimals() const {
        for (const auto& animal : animals) {
            animal->printInfo();
        }
    }

    void addAnimal(const Animal& animal) {
        animals.push_back(new Animal(animal)); 
    }

    int searchAnimalByName(const std::string& animalName) const {
        for (size_t i = 0; i < animals.size(); ++i) {
            if (animals[i]->getName() == animalName) {
                return static_cast<int>(i); 
            }
        }
        return -1; 
    }

    void removeAnimalByName(const std::string& animalName) const{
        for (size_t i = 0; i < animals.size(); ++i) {
            if (animals[i]->getName() == animalName) {
                delete animals[i]; 
            }
        }
    }

    double averageAgeForType(const std::string& animalType) const {
        int count = 0;
        double totalAge = 0.0;

        for (const auto& animal : animals) {
            if (animal->getType() == animalType) {
                totalAge += static_cast<double>(animal->getAge());
                ++count;
            }
        }

        return (count > 0) ? (totalAge / static_cast<double>(count)) : 0.0;
    }

private:
    static const int MAX_CAPACITY = 100; 
    std::string name;
    std::vector<Animal*> animals;
};

#endif
