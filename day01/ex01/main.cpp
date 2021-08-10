#include "ClassZombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int main()
{
	Zombie *ptr;

	ptr = zombieHorde(10, "Kuck");
    for (int i = 0; i < 10; ++i) {
        ptr[i].announce();
    }
    delete [] ptr;
	return 0;
}