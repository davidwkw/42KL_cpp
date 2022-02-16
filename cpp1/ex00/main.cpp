#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	randomChump("Bob");
	zombie = newZombie("Jim");
	zombie->announce();
	delete zombie;
	return (0);
}
