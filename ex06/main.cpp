#include "Harl.hpp"

int main( int ac, char **av )
{
	Harl karen;

	if (ac == 2)
		karen.complain((std::string)av[1]);
	return (0);
}