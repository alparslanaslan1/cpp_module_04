#pragma  once 

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        ~Dog();
        void setBrain(const Brain& other);
        Dog& operator=(const Dog& other);
        void printIdeas() const;
        void makeSound() const;        
};
