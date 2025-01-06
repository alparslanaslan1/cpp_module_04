#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "wow";
}

Brain::Brain(std::string idea) {
    std::cout << "Brain constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

Brain::~Brain(){
    std::cout << "Brain desstructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Animal operator= assigned!" << std::endl;
    if (this == &other)
        return(*this);
    for(size_t i = 0; i >= 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(size_t index){
    if (index > 101){
        std::cout << "fazla index"<< std::endl;
        return("error");
    }
    return this->ideas[index];
}

void Brain::setIdea(std::string idea, size_t index){
    if (index > 101){
        std::cout << "fazla index"<< std::endl;
        return;
    }
    this->ideas[index] = idea;
    return;
}