#pragma once
#include <iostream>

class Zombie {
public:
	Zombie(void);
	~Zombie(void);
	void				announce(void);
	void				setName(std::string name);
	static std::string	random_names_[10];
private:
	
	std::string			name_;
};
