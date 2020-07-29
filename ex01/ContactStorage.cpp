// Created by Tom Jans on 28-07-20.
#include "ContactStorage.hpp"

void ContactStorage::set_contact(int index, Contact contact)
{
}

Contact * ContactStorage::get_contact(int index, bool truncate)
{
	return &this->contacts[index];
}

Contact Contact::create_from_stdin()
{
	Contact contact;

	std::cout << "NEW CONTACT\n---" << std::endl;
	std::cout << "FIRST NAME: ";
	std::cin >> contact.first_name;
	std::cout << "LAST NAME: ";
	std::cin >> contact.last_name;
	std::cout << "NICKNAME: ";
	std::cin >> contact.nickname;
	std::cout << "LOGIN: ";
	std::cin >> contact.login;
	std::cout << "POSTAL ADDRESS: ";
	std::cin >> contact.postal_address;
	std::cout << "EMAIL ADDRESS: ";
	std::cin >> contact.email_address;
	std::cout << "PHONE NUMBER: ";
	std::cin >> contact.phone_number;
	std::cout << "BIRTHDAY DATE: ";
	std::cin >> contact.birthday_date;
	std::cout << "FAVORITE MEAL: ";
	std::cin >> contact.favorite_meal;
	std::cout << "UNDERWEAR COLOR: ";
	std::cin >> contact.underwear_color;
	std::cout << "DARKEST SECRET: ";
	std::cin >> contact.darkest_secret;
	return contact;
}
