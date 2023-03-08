#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define GREEN "\033[38;5;64m"
#define PINK "\033[38;5;168m"
#define RED "\033[38;5;160m"
#define CLEAR "\033[0m"
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