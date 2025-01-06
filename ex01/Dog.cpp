#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain()){
    std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog &copy) : Animal(copy) , _brain(new Brain(*copy._brain)){
    std::cout << "Dog "<< " copy constructed!" << std::endl;

}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain); 
		Animal::operator=(other);
	}
	return *this;
}

void Dog::setBrain(const Brain& other){
    *_brain = other;

}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const{
    std::cout << "woof" << std::endl;
}
