#include "HumanA.hpp"


HumanA::HumanA( std::string _name, Weapon& _weapon)
		: name(_name), weapon(_weapon) {}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}