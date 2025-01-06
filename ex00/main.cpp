#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
#if 1
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    return 0;
}
#else
{
    const WrongAnimal *meta = new WrongCat();
    const WrongAnimal *i = new WrongAnimal();
    meta->makeSound();
    i->makeSound();
    delete meta;
    delete i;
}
#endif