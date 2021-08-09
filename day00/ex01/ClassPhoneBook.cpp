#include "ClassPhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook() {
	current_ = 0;
}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact() {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Введите фамилию: ";
	std::getline(std::cin, first_name);
	std::cout << "Введите имя: ";
	std::getline(std::cin, last_name);
	std::cout << "Введите никнейм: ";
	std::getline(std::cin, nickname);
	std::cout << "Введите номер телефона: ";
	std::getline(std::cin, phone_number);
	std::cout << "Введите секретное слово: ";
	std::getline(std::cin, darkest_secret);

	// создаем контакт
	Contact		contact(first_name, last_name, nickname, phone_number, darkest_secret);
	
	// добавляем в книгу
	if (current_ < max_contacts_) {
		contacts_[current_] = contact;
		current_++;
	}
	else { // если больше чем максимум заменяем последний
		contacts_[max_contacts_ - 1] = contact;
	}
}

void	PhoneBook::search_contact() {
	Contact				contact;
	int					number_of_contact;

	if (current_ < 1) {
		std::cout << "PhoneBook empty!\n";
		return ;
	}
	// печатаем контакты в поля шириной 10
	for (int i = 0; i < current_; i++) {
		contact = contacts_[i];
		if (!contact.empty()) {
			std::cout << i << ") ";
			std::cout << std::setw(width_field_) << to_width_field(contact.get_first_name()) << "|";
			std::cout << std::setw(width_field_) << to_width_field(contact.get_last_name()) << "|";
			std::cout << std::setw(width_field_) << to_width_field(contact.get_nickname()) << "|";
			std::cout << std::setw(width_field_) << to_width_field(contact.get_phone_number()) << std::endl;
		}
	}
	// детали контакта
	std::cout << "Введите номер контакта для детальной информации: ";
	std::cin >> number_of_contact;
	if (!std::cin.good() || number_of_contact < 0 || number_of_contact > (current_ - 1)) {
		std::cout << "Неверный номер контакта, допустимые номера 0..." << current_ - 1 << std::endl;
	}
	else {
		contact = contacts_[number_of_contact];
		std::cout << "First name: " << contact.get_first_name() << std::endl;
		std::cout << "Last name: " << contact.get_last_name() << std::endl;
		std::cout << "Nickname: " << contact.get_nickname() << std::endl;
		std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
	}
	// очистка буфера и пропуск всего до новой строки
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}

std::string		PhoneBook::to_width_field(std::string s) {
	if (s.length() > width_field_)
		return s.substr(0, width_field_ - 1).append(".");
	return s.substr(0, width_field_);
}