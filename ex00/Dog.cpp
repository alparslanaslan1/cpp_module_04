#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog& other){
    std::cout << "Dog " << this->type << " copy constructed!" << std::endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &copy)
{
	Animal::operator=(copy);
	return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const{
    std::cout << "woof" << std::endl;
}
