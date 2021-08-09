#include "ClassZombie.hpp"

Zombie	*newZombie(std::string name);

int main()
{
	std::srand(std::time(NULL));
	Zombie p;
	Zombie e;
	Zombie t;
	Zombie *ptr;

	p.announce();
	e.announce();
	t.announce();

	ptr = newZombie("Kuck");
	return 0;
}