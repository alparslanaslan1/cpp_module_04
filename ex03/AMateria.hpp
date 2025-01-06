#pragma  once 


#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria& copy_value);
        AMateria& operator= (const AMateria& value);

        void setType(std::string setV);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

