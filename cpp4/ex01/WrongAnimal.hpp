#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal & src);
		WrongAnimal & operator=(const WrongAnimal & src);

	void makeSound(void) const;
		std::string getType(void) const;
};

#endif
