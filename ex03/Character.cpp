#include "Character.hpp"

Character::Character()
{
    setName("Unknown Player");
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::Character(std::string name)
{
    setName(name);
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete materias[i];
    }
}
Character::Character(const Character& copy_value)
{
    *this = copy_value;
}
Character& Character::operator= (const Character& value)
{
    if (this != &value)
    {
        this->_name = value.getName();
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
                delete this->materias[i];
            this->materias[i] = value.materias[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::setName(const std::string setV)
{
    this->_name = setV;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
            break;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    this->materias[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->materias[idx])
        this->materias[idx]->use(target);
}