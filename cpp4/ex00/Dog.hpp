#ifndef DOG_HPP

# define DOG_HPP
#include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog & src);
		~Dog(void);
		Dog & operator=(const Dog & src);

		virtual void makeSound(void) const;
};

#endif
