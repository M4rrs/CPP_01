#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB{

	private:
		std::string	_name;
		Weapon *_weaponB;

	public:
		HumanB( std::string name );
		~HumanB();
		void setWeapon( Weapon &weapon );
		void attack( void ) const;
};

#endif