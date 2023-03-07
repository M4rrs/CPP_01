#include "Zombie.hpp"

int main( void )
{
	std::string	name;

	std::cout << "Zombie [randomChump]: " << std::flush;
	std::cin >> name;
	randomChump(name);

	std::cout << "Zombie [heap]: " << std::flush;
	std::cin >> name;
	Zombie *
}