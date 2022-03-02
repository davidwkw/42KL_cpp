#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat & src);
		WrongCat & operator=(const WrongCat & src);
};

#endif
