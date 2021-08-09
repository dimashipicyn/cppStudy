#include "ClassZombie.hpp"

std::string	Zombie::random_names_[10] = {"Michael", "Maria", "Sergey", "Dmitry", "Nastya", "Marina", "Alisa", "Yarik", "Egor", "Ivan"};

Zombie::Zombie() {
	name_ = random_names_[std::rand() % 10];
	std::cout << "Zombie " << name_ << " created\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name_ << " closed\n";
}

void	Zombie::announce(void) {
	std::cout << "Yeah, I zombie! My name is " << name_ << std::endl;
}

void	Zombie::setName(std::string name) {
	name_ = name;
}