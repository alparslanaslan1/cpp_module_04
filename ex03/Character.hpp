#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *materias[4];
    public:
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character& copy_value);
        Character& operator= (const Character& value);

        std::string const & getName() const;
        void setName(const std::string setV);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};