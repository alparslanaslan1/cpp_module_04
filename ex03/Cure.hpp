#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& copy_value);
        Cure& operator= (const Cure& value);

        void use(ICharacter& target);
        AMateria* clone() const;
};