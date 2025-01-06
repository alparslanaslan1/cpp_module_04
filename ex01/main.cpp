#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.cpp"
#include "WrongCat.cpp"


int main()
{
   const Animal* j = new Dog();
   const Animal* i = new Cat();

   std::cout << j->getType() << std::endl;
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   std::cout << i->getType() << std::endl;
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   j->makeSound();
   std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<std::endl;
   i->makeSound();
   std::cout <<""<< std::endl;


   Cat a;
   Dog b;
   WrongCat c;
   WrongAnimal *d = new WrongCat();
   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;

   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   c.makeSound();
    std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   d->makeSound();
   std::cout <<""<< std::endl;
   std::cout << "----------------------------------"<<std::endl;
   std::cout <<""<< std::endl;
   for (int i = 0; i < 5; i++)
   {
       std::cout << "-1111111111111111111111111111111111111111111- | WrongCat " << c.getWrongCatType()<<std::endl;
   }
   std::cout <<""<< std::endl;
   std::cout << "----------------------------------"<<std::endl;
   delete j;
   delete i;
   delete d;
   return 0;
}
