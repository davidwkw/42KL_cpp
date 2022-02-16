#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type)
{
	return;
}

const std::string &Weapon::getType(void) const
{
	const std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string input)
{
	this->_type = input;
}
