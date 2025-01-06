#pragma  once 

#include <iostream>

#define ORANGE "\033[38;5;208m"
#define GREEN "\033[38;5;41m"
#define BLUE "\033[38;5;27m"
#define RED "\033[38;5;160m"
#define YELLOW "\033[38;5;226m"
#define PURPLE "\033[38;5;92m"
#define CYAN "\033[38;5;51m"
#define RESET "\033[0m"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(std::string name);
        AAnimal(AAnimal& other);
        virtual ~AAnimal() = 0;
        AAnimal& operator=(const AAnimal& other);
        std::string getType() const;
        virtual void makeSound() const = 0;
    protected:
        std::string type;
};

