#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

/*============	 PRIVATE	============*/

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\n"
			<< "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\"\n"
			<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]\n"
			<< "\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"\n"
			<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\n"
			<< "\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"\n"
			<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\n"
			<< "\"This is unacceptable! I want to speak to the manager now.\""
			<< std::endl;
}

/*============	 PUBLIC	============*/

void	Harl::complain( std::string level )
{
	int index = -1;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == level)
			index = i;
	}

	switch (index)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}