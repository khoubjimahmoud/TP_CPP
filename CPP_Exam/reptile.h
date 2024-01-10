#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <string>
#include <iostream>

class Reptile : public Animal{
    public:
        Reptile () : scalePattern(""){}

        Reptile (std::string type, std::string name, std::string color, std::string diet, std::string habitat, std::string sounds,
         bool isPet, int age, double weight, double height, double wingspan)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

        Reptile(const Reptile& other)
        : Animal(other), scalePattern(other.scalePattern){}

        //GET
        std::string getScalePattern () const{return scalePattern ;};
        //SET
        void setScalePattern (std::string newScalePattern){ scalePattern=newScalePattern ; } ;
        //FUN
        void printInfo() const override { }
    private:
        std::string scalePattern;
};

#endif