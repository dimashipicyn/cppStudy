#include "ClassZombie.hpp"

Zombie	*newZombie(std::string name);
void    randomChump(std::string name);

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
    randomChump("topooto");
    delete ptr;
	return 0;
}