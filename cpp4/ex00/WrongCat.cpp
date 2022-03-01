#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "Default wrong cat class constructor was called" << std::endl;
	this->type = "Wrong cat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal()
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=(const WrongCat & src)
{
	std::cout << "Cat assignment operator was called" << std::endl;
	if (this != &src)
		this->type = src.getType();
	return (*this);
}
