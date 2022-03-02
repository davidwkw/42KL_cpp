#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default cat class constructor was called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat & src) : Animal()
{
	std::cout << "Cat copy constructor was called" << std::endl;
	this->_brain = new Brain;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(const Cat & src)
{
	std::cout << "Cat assignment operator was called" << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(src.getBrain()->getIdea(i), i);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ I'm going to pee on your bed" << std::endl;
}

Brain * Cat::getBrain(void) const
{
	return (this->_brain);
}
