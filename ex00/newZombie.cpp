#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*ptrZombie = new Zombie( name );

	if ( !ptrZombie )
		std::cout << "Allocation failed." << std::endl;
	return (ptrZombie);
}

// when allocating memory for an instance of a class, you need to
// specify how the instance is initialized.
// The constructor of the class is called, in this case our Zombie
// constructor takes in the name string.