#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog"),  _brain(new Brain()){
    std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog& other){
    std::cout << "Dog " << this->type << " copy constructed!" << std::endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain); 
		AAnimal::operator=(other);
	}
	return *this;
}

void Dog::setBrain(const Brain& other){
    *_brain = other;

}

void Dog::printIdeas() const
{
	if (_brain->getIdea(0) == "I have no idea!")
	{
	    std::cout << "Dog has no idea!" <<   std::endl;
	}
	else
	{
		for (size_t i = 0; i < 100; i++)
		{
			if (_brain->getIdea(i).compare("I have no idea!") != 0)
			{
			    std::cout << _brain->getIdea(i) << std::endl;
			}
		}
	}

}

Dog::~Dog(){
	delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const{
    std::cout << "woof" << std::endl;
}
