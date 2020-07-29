// Created by Tom Jans on 28/7/20.

#include "Phonebook.hpp"

void Phonebook::add_contact()
{
    Contact contact = Contact::create_from_stdin();
    for (int i = 0; i < 8; i++)
    {
        if (!contacts.get_contact(i)->first_name.length())
        {
            contacts.set_contact(i, contact);
            return;
        }
    }
    std::cerr << "CANNOT SAVE PLEASE TRY AGAIN LATER" << std::endl;
}

void Phonebook::print_single_contact(int index)
{
    const Contact *contact = contacts.get_contact(index);

    std::cout << "         " << index << "|" <<
              truncate_string(contact->first_name) << "|" <<
              truncate_string(contact->last_name) << "|" <<
              truncate_string(contact->nickname) << std::endl;
}

void Phonebook::print_contact_list()
{
    std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
    for (int i = 0; i < 8; i++)
        if (contacts.get_contact(i)->first_name.length())
            print_single_contact(i);
}
std::string Phonebook::truncate_string(std::string s)
{
    std::string output;

    if (s.length() >= 10) {
        output = s.substr(0, 10);
        output[9] = '.';
    }
    else {
        output = s;
        output.insert(0, 10 - s.size(), ' ');
    }
    return output;
}

void Phonebook::print_full_contact(int index)
{
    const Contact *contact = contacts.get_contact(index);

    if (contact->first_name.length())
        contact->print_to_stdout();
    else
        std::cout << "INDEX OUT OF RANGE!" << std::endl;
}

int main()
{
    std::string cmd;
    Phonebook phonebook;

    std::cout << "PHONEBOOK\nCOMMANDS: EXIT, ADD, SEARCH" << std::endl;
    while (true) {
        std::cout << "> ";
        std::cin >> cmd;
        for (unsigned long i = 0; i < cmd.length(); i++)
            if (cmd[i] >= 'a' && cmd[i] <= 'z')
                cmd[i] ^= 0x20;
        if (cmd == "EXIT")
            return 0;
        if (cmd == "ADD")
            phonebook.add_contact();
        if (cmd == "SEARCH") {
            phonebook.print_contact_list();
            std::cin >> cmd;
            cmd[0] &= 0xF;
            if (cmd[0] >= 0 && cmd[0] <= 7)
                phonebook.print_full_contact(cmd[0]);
            else
                std::cout << "INDEX OUT OF RANGE" << std::endl;
        }
        if (std::cin.eof())
        {
            // Once the program gets an EOF it might get stuck in a
            // while loop. This check prevents that from happening
            std::cout << "CTRL+D PRESSED" << std::endl;
            return 0;
        }
    }
}
