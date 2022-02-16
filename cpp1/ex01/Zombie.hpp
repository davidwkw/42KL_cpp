#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		~Zombie(void);
		void 	announce(void) const;
		void	setName(const std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
