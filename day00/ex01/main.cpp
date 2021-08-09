#include <iostream>
#include "ClassPhoneBook.hpp"

int main()
{
	PhoneBook	pbook;
	std::string	question;

	while (1) {
		std::cout << "Введите команду: ADD или SEARCH или EXIT\n";
		std::getline(std::cin, question);
		if (std::cin.eof())
			break ;
		if (question == "ADD") {
			pbook.add_contact();
		}
		else if (question == "SEARCH") {
			pbook.search_contact();
		}
		else if (question == "EXIT") {
			break ;
		}
		else {
			std::cout << "Неверная команда!\n";
		}
	}
	return 0;
}