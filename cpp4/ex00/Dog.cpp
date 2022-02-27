#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Default dog class constructor was called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & src) : Animal()
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor was called" << std::endl;
}

Dog & Dog::operator=(const Dog & src)
{
	std::cout << "Dog assignment operator was called" << std::endl;
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof I'm a good boi. I demand the headpats" << std::endl;
}
