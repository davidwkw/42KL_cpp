#ifndef WEAPON_HPP

# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void){}
		Weapon(const std::string type);
		const std::string &getType(void) const;
		void		setType(std::string input);
};

#endif
