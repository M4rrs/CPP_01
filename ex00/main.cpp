#include "Zombie.hpp"

int main( void )
{
	std::string	name;

	std::cout << "Zombie [stack]: " << std::flush;
	std::cin >> name;
	Zombie	stackZomb(name);
	stackZomb.announce();

	std::cout << "Zombie [heap]: " << std::flush;
	std::cin >> name;
	Zombie *heapZomb = newZombie( name );
	heapZomb->announce();

	std::cout << "Zombie [randChump stack]: " << std::flush;
	std::cin >> name;
	randomChump(name);

	delete heapZomb;

	std::cout << "Fighting off the stackZomb" << std::endl;
	std::cout << "Reloading the shotgun" << std::endl;
}

/*
* Both stack zombies do the exact same thing here, creating a new
* unallocated instance (stack memory). The destructor is called by default.
* The difference here is that randChump zombie calls destructor once the randomChump
* function ends, and the stack zombie in main will call destructor when it reaches
* end of the main function.
* Heap zombie will call the destructor when delete is called.
*/