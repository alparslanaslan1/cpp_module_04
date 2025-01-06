#pragma  once 

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(WrongAnimal& other);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        std::string getWrongAnimalType() const;
        void makeSound() const;
    protected:
        std::string type;
};

