#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie	*ptrHorde = new Zombie[N];

	if (!ptrHorde)
		std::cout << "Failed allocation." << std::endl;
	else
	{
		for (int i = 0; i < N; i++)
			ptrHorde[i].setName(name, i);
	}
	return (ptrHorde);
}