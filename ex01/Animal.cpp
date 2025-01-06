#include "Animal.hpp"

Animal::Animal() : type("xxx"){
    std::cout << "Animal default constructor called" << std::endl;
}


Animal::Animal(std::string type): type(type){
    std::cout << "Animal " << type << " constructor called" << std::endl;
}
Animal::Animal(const Animal& other) {
    std::cout << "Animal " << type << " copy constructed!" << std::endl;
    type = other.type;
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
    std::cout << this->type << " ses 1 2 3" << std::endl;
}