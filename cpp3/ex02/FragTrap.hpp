#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		FragTrap(void);

	public:
		FragTrap(const std::string name);
		FragTrap(const FragTrap & src);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap & src);

		void highFivesGuys(void);
};

#endif
