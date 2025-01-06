#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->mate[i] = NULL;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->mate[i];
}
MateriaSource::MateriaSource(const MateriaSource& copy_value)
{
    *this = copy_value;
}
MateriaSource& MateriaSource::operator= (const MateriaSource& value)
{
    if (this != &value)
    {
        for(int i = 0; i < 4; i++)
        {
            if (this->mate[i])
                delete mate[i];
            this->mate[i] = value.mate[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!this->mate[i])
        {
            this->mate[i] = m;
            break;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
        return (new Ice());
    if (type == "cure")
        return (new Cure());
    return 0;
}