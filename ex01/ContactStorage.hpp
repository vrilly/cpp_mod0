// Created by Tom Jans on 28-07-20.

#ifndef CONTACTSTORAGE_HPP
#define CONTACTSTORAGE_HPP

#include <string>
#include <iostream>

class Contact
{
public: // Yes, i could've made a struct from this but the subject says class :)
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	static Contact create_from_stdin();
	void print_to_stdout() const;
};

class ContactStorage
{
	Contact contacts[8];
public:
	const Contact * get_contact(int index);
	void set_contact(int index, Contact contact);
};

#endif //CONTACTSTORAGE_HPP
