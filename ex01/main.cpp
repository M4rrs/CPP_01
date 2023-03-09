#include "Zombie.hpp"

int main( void )
{
	std::string name;
	int	N;

	std::cout << "Zombie Horde [name]: " << std::flush;
	std::cin >> name;
	std::cout << "Horde Size: " << std::flush;
	while (std::cin >> N)
	{
		if (N < 2)
			std::cout << "Too little. MOAR!" << std::endl;
		else
			break ;
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Horde Size: " << std::flush;
	}

	Zombie *zombHorde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		zombHorde[i].announce();

	delete[] zombHorde;
}