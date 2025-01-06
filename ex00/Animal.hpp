#pragma  once 

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string name);
        Animal(Animal& other);
        virtual ~Animal();
        Animal& operator=(const Animal& other);
        std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string type;
};

