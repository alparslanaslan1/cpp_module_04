#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other){
    std::cout << "Cat " << this->type << " copy constructed!" << std::endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &copy)
{
	Animal::operator=(copy);
	return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType(){
    return (this->type);
}
