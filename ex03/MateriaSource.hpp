#pragma once

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria *mate[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& copy_value);
        MateriaSource& operator= (const MateriaSource& value);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

};