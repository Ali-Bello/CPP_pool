#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {

	private :
		std::string name;
	
	public:
		Zombie(std::string name);
		void	annonce( void );
};

Zombie*	newZombie( std::string name );
void		randomChump( std::string name );

#endif