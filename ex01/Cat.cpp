#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain()){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) , _brain(new Brain(*copy._brain))
{
	std::cout << "I'm pretty sure I saw a cat." << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain); 
		Animal::operator=(other);
	}
	return *this;
}

void Cat::setBrain(const Brain& other){
    *_brain = other;

}

Cat::~Cat(){
	delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType(){
    return (this->type);
}

void Cat::makeSound() const{
    std::cout << "meow" << std::endl;
}
