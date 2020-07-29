// Created by Tom Jans on 28/7/20.

#include "phonebook.hpp"

void Phonebook::add_contact()
{
	Contact contact = Contact::create_from_stdin();
}

void Phonebook::print_contacts()
{

}

int main()
{
	std::string cmd;
	Phonebook phonebook;

	while (true)
	{
		std::cin >> cmd;
		if (cmd == "EXIT")
			return 0;
		if (cmd == "ADD")
			phonebook.add_contact();
	}
}
