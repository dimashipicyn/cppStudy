#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	av++;
	while (*av) {
		for (int i = 0; (*av)[i]; i++)
			std::cout << (char)std::toupper((*av)[i]);
		av++;
	}
	std::cout << "\n";
	return 0;
}