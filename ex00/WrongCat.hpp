#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& other);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& other);
        std::string getType();
        void makeSound() const;        
};