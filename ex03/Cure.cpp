#include "Cure.hpp"

Cure::Cure()
{
    setType("Cure");
}
Cure::~Cure()
{}
Cure::Cure(const Cure& copy_value)
{
    *this = copy_value;
}
Cure& Cure::operator= (const Cure& value)
{
    if (this != &value)
        this->_type = value.getType();
    return *this;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}