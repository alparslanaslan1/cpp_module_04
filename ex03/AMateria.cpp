#include "AMateria.hpp"

AMateria::AMateria()
{}
AMateria::AMateria(std::string const & type)
{
    setType(type);
}
AMateria::~AMateria()
{}
AMateria::AMateria(const AMateria& copy_value)
{
    *this = copy_value;
}
AMateria& AMateria::operator= (const AMateria& value)
{
    if (this != &value)
    {
        this->_type = value.getType();
    }
    return *this;
}

void AMateria::setType(std::string setV)
{
    this->_type = setV;
}
std::string const & AMateria::getType() const
{
    return this->_type;
}
void AMateria::use(ICharacter& target)
{
    (void)target;
}