#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {}

HumanB::~HumanB(){}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weaponB = &weapon;
}

void	HumanB::attack( void ) const
{
	std::cout << _name + " attacks with their " + _weaponB->getType() << std::endl;
}