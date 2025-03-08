#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		ICharacter();
		ICharacter(const ICharacter& copy);
		ICharacter&	operator=(const ICharacter& ref);
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif