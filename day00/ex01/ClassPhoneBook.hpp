#pragma once
#include <iostream>
#include <iomanip>
#include "ClassContact.hpp"

class PhoneBook {
public:
		PhoneBook();
		~PhoneBook();
void	add_contact();
void	search_contact();
private:
	static const int	max_contacts_ = 8;
	static const int	width_field_ = 10;
	Contact				contacts_[max_contacts_];
	int					current_;
	std::string			to_width_field(std::string s);
};