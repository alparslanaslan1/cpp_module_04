#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
    std::cout << "WrongCat " << this->type << " copy constructed!" << std::endl;
    this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

std::string WrongCat::getWrongCatType(){
    return (this->type);
}

void WrongCat::makeSound() const{
    std::cout << "meow" << std::endl;
}
