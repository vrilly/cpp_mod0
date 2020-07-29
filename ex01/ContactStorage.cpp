// Created by Tom Jans on 28-07-20.
#include "ContactStorage.hpp"

#include <utility>

void ContactStorage::set_contact(int index, Contact contact)
{
    contacts[index] = contact;
}

const Contact * ContactStorage::get_contact(int index)
{
	return &this->contacts[index];
}

Contact Contact::create_from_stdin()
{
	Contact contact;

	std::cin.ignore(); // Get the newline character out of the buffer
	std::cout << "NEW CONTACT\n---" << std::endl;
	std::cout << "FIRST NAME: ";
	std::getline(std::cin, contact.first_name);
	std::cout << "LAST NAME: ";
	std::getline(std::cin, contact.last_name);
	std::cout << "NICKNAME: ";
	std::getline(std::cin, contact.nickname);
	std::cout << "LOGIN: ";
	std::getline(std::cin, contact.login);
	std::cout << "POSTAL ADDRESS: ";
	std::getline(std::cin, contact.postal_address);
	std::cout << "EMAIL ADDRESS: ";
	std::getline(std::cin, contact.email_address);
	std::cout << "PHONE NUMBER: ";
	std::getline(std::cin, contact.phone_number);
	std::cout << "BIRTHDAY DATE: ";
	std::getline(std::cin, contact.birthday_date);
	std::cout << "FAVORITE MEAL: ";
	std::getline(std::cin, contact.favorite_meal);
	std::cout << "UNDERWEAR COLOR: ";
	std::getline(std::cin, contact.underwear_color);
	std::cout << "DARKEST SECRET:";
	std::getline(std::cin, contact.darkest_secret);
	return contact;
}

void Contact::print_to_stdout() const
{
    std::cout << "FIRST NAME: " << first_name << std::endl;
    std::cout << "LAST NAME: " << last_name << std::endl;
    std::cout << "NICKNAME: " << nickname << std::endl;
    std::cout << "LOGIN: " << login << std::endl;
    std::cout << "POSTAL ADDRESS: " << postal_address << std::endl;
    std::cout << "EMAIL ADDRESS: " << email_address << std::endl;
    std::cout << "PHONE NUMBER: " << phone_number << std::endl;
    std::cout << "BIRTHDAY DATE: " << birthday_date << std::endl;
    std::cout << "FAVORITE MEAL: " << favorite_meal << std::endl;
    std::cout << "UNDERWEAR COLOR: " << underwear_color << std::endl;
    std::cout << "DARKEST SECRET: " << darkest_secret << std::endl;
}
