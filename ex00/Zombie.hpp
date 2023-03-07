#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie {

	private:
		std::string	_name;
		
	public:
		void	announce( void );
		Zombie( std::string name );
		~Zombie( void );
};

Zombie* newZombie( std::string name ); //allocates and creates the zombie on heap
void randomChump( std::string name ); //creates the zombie on stack

#endif