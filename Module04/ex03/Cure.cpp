#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& copy) : AMateria(copy) {}

Cure&	Cure::operator=(const Cure& ref) {
	if (this != &ref)
		AMateria::operator=(ref);
	return (*this);
}

Cure::~Cure() {}

AMateria*	Cure::clone() const { return ( new Cure() ); }

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
						<< "'s wounds *" << std::endl;
}