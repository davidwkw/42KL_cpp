#include "Cat.hpp"

Cat::Cat(void) : Animal(), type("Cat")
{
	std::cout << "Default cat class constructor was called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal()
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
}

Cat & Cat::operator=(const Cat & src)
{
	std::cout << "Cat assignment operator was called" << std::endl;
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ I'm going to pee on your bed" << std::endl;
}
