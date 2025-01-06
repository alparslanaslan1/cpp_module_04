#pragma  once 


#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        ~Dog();
        Dog& operator=(const Dog& other);
        void setBrain(const Brain& other);
        std::string getType();
        void makeSound() const;        
};
