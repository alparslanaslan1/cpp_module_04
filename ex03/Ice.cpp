#include "Ice.hpp"

Ice::Ice()
{
    setType("ice");
}
Ice::~Ice()
{}
Ice::Ice(const Ice& copy_value)
{
    *this = copy_value;
}
Ice& Ice::operator= (const Ice& value)
{
    if (this != &value)
        this->_type = value.getType();
    return *this;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}