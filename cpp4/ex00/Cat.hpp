#ifndef CAT_HPP

# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat & src);
		~Cat(void);
		Cat & operator=(const Cat & src);

		void makeSound(void) const;
};

#endif
