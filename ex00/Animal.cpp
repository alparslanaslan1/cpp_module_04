#include "Animal.hpp"

Animal::Animal() : type("NULL"){
    std::cout << "Animal default constructor called" << std::endl;
}


Animal::Animal(std::string type): type(type){
    std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal(Animal& other){
    std::cout << "Animal " << this->type << " copy constructed!" << std::endl;
    *this = other;
}


Animal::~Animal(){
    std::cout << "Animal " << type << " destructor called" << std::endl;     
}


Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal " << this->type << " assigned!" << std::endl;
    if (this != &other){
        this->type = other.type;
    }
    return(*this);
}


std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << this->type << " Animal makeSound" << std::endl;
}