// Created by Tom Jans on 28/7/20.

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "ContactStorage.hpp"

class Phonebook
{
	ContactStorage contacts;
public:
	void add_contact();
	void print_contacts();
};

#endif
