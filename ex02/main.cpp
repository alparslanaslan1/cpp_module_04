#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{
	{
		std::cout << GREEN << "----------====EXIRCISE I====----------\n" << PURPLE << std::endl;
		try
		{
			AAnimal* ben10 = NULL;
			std::cout << ben10->getType() << " " << std::endl;
			
			const AAnimal* dog = new Dog();
			const AAnimal* cat = new Cat();


			std::cout << dog->getType() << " " << std::endl;
			std::cout << cat->getType() << " " << std::endl;

			dog->makeSound(); // "Woof!" gibi bir ses
			cat->makeSound(); // "Meow!" gibi bir ses

			// Belleği temizleyelim
			delete dog;
			delete cat;
		}
		catch(const std::bad_alloc& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}