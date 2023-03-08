#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name )
{
	std::cout << _name << GREEN << " has risen from the grave!"
			<< CLEAR << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << _name << RED << " was shot in the brain!"
			<< CLEAR << std::endl;
}

void 	Zombie::announce( void )
{
	std::cout << _name << ": " << PINK << "BraiiiiiiinnnzzzZ..."
			<< CLEAR << std::endl;
}