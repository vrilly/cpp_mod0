// Created by Tom Jans on 28/7/20.

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "ContactStorage.hpp"

class Phonebook
{
	ContactStorage contacts;

	std::string truncate_string(std::string s);
	void print_single_contact(int index);
public:
	void add_contact();
	void print_contact_list();
    void print_full_contact(int index);
};

#endif
