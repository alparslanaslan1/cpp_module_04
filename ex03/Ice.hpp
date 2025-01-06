#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& copy_value);
        Ice& operator= (const Ice& value);

        void use(ICharacter& target);
        AMateria* clone() const;
};