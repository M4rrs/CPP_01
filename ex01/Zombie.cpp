#include "Zombie.hpp"

Zombie::Zombie() {

	std::cout << GREEN << "A zombie has risen from the grave!"
			<< CLEAR << std::endl;
}

Zombie::~Zombie() {

	std::cout << _name + RED + " was shot in the brain!"
			+ CLEAR << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name + ": " + PINK + "BraiiiiiiinnnzzzZ..."
			+ CLEAR << std::endl;
}

void	Zombie::setName( std::string name, int index )
{
	_name = name + std::to_string(index);
}