#include "AAnimal.hpp"

AAnimal::AAnimal() : type("xxx"){
    std::cout << "AAnimal default constructor called" << std::endl;
}


AAnimal::AAnimal(std::string type): type(type){
    std::cout << "AAnimal " << type << " constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal& other){
    std::cout << "AAnimal " << this->type << " copy constructed!" << std::endl;
    *this = other;
}


AAnimal::~AAnimal(){
    std::cout << "AAnimal " << type << " destructor called" << std::endl;     
}


AAnimal& AAnimal::operator=(const AAnimal& other){
    std::cout << "AAnimal " << this->type << " assigned!" << std::endl;
    if (this != &other){
        this->type = other.type;
    }
    return(*this);
}


std::string AAnimal::getType() const{
    return (this->type);
}

void AAnimal::makeSound() const{
    std::cout << this->type << " ses 1 2 3" << std::endl;
}