#pragma  once 

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& other);
        ~Cat();
        Cat& operator=(const Cat& other);
        void setBrain(const Brain& other);
        std::string getType();
        void makeSound() const;        
};
