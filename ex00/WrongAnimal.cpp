#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("xxx"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(std::string type): type(type){
    std::cout << "WrongAnimal " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other){
    std::cout << "WrongAnimal " << this->type << " copy constructed!" << std::endl;
    *this = other;
}


WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << type << " destructor called" << std::endl;     
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal " << this->type << " assigned!" << std::endl;
    if (this != &other){
        this->type = other.type;
    }
    return(*this);
}


std::string WrongAnimal::getType() const{
    return (this->type);
}

void WrongAnimal::makeSound() const{
    std::cout << this->type << " sound 1 2 3" << std::endl;
}