#pragma  once 


#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
        std::string getType() const;
        void printIdeas() const;
        void makeSound() const;        
};
