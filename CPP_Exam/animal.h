#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    
    Animal() :type("Unknown"),name(""), color(""), diet(""), habitat(""), sounds(""), isPet(false), age(0), weight(0.0), height(0.0) {}

    Animal(std::string type,std::string name, std::string color, std::string diet, std::string habitat, std::string sounds,
           bool isPet, int age, double weight, double height)
        : type(type),name(name), color(color), diet(diet), habitat(habitat), sounds(sounds),
          isPet(isPet), age(age), weight(weight), height(height) {}

    Animal(const Animal& other)
        : type(other.type), name(other.name), color(other.color), diet(other.diet), habitat(other.habitat),
          sounds(other.sounds), isPet(other.isPet), age(other.age), weight(other.weight), height(other.height) {}


    //GET
    std::string getType() const {return type;}
    std::string getName() const { return name; }
    std::string getColor() const { return color; }
    std::string getDiet() const { return diet; }
    std::string getHabitat() const { return habitat; }
    std::string getSounds() const { return sounds; }
    bool getIsPet() const { return isPet; }
    int getAge() const { return age; }
    double getWeight() const { return weight; }
    double getHeight() const { return height; }

    //SET
    void setType (const std::string& newType) {type=newType;}
    void setName(const std::string& newName) { name = newName; }
    void setColor(const std::string& newColor) { color = newColor; }
    void setDiet(const std::string& newDiet) { diet = newDiet; }
    void setHabitat(const std::string& newHabitat) { habitat = newHabitat; }
    void setSounds(const std::string& newSounds) { sounds = newSounds; }
    void setIsPet(bool newIsPet) { isPet = newIsPet; }
    void setAge(int newAge) { age = newAge; }
    void setWeight(double newWeight) { weight = newWeight; }
    void setHeight(double newHeight) { height = newHeight; }

    //FUN
    void make_sound(Animal animal){}
    virtual void printInfo() const {
        std::cout << "Type:" << type << "\n"
                << "Name: " << name << "\n"
                  << "Color: " << color << "\n"
                  << "Diet: " << diet << "\n"
                  << "Habitat: " << habitat << "\n"
                  << "Sounds: " << sounds << "\n"
                  << "Is Pet: " << (isPet ? "Yes" : "No") << "\n"
                  << "Age: " << age << "\n"
                  << "Weight: " << weight << "\n"
                  << "Height: " << height << "\n";
    }

private:
    std::string type;
    std::string name;
    std::string color;
    std::string diet;
    std::string habitat;
    std::string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

    
};

#endif  
