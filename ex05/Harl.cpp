#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

/*============	 PRIVATE	============*/

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\t\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\""
			<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]\t\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\""
			<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\t\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\""
			<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\t\"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

/*============	 PUBLIC	============*/

void	Harl::complain( std::string level )
{
	void	(Harl::*ft_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == level)
			(this->*ft_ptr[i])();
	}
}