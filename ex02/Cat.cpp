#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain()){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other){
    std::cout << "Cat " << this->type << " copy constructed!" << std::endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain); 
		AAnimal::operator=(other);
	}
	return *this;
}

void Cat::setBrain(const Brain& other){
    *_brain = other;

}

void Cat::printIdeas() const
{
	if (_brain->getIdea(0) == "I have no idea!")
	{
	    std::cout << "Cat has no idea!" <<   std::endl;
	}
	else
	{
		for (size_t i = 0; i < 100; i++)
		{
			if (_brain->getIdea(i).compare("I have no idea!") != 0)
			{
			    std::cout << _brain->getIdea(i) <<   std::endl;
			}
		}
	}

}

Cat::~Cat(){
	delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType()const{
    return (this->type);
}

void Cat::makeSound() const{
    std::cout << "meow" << std::endl;
}
