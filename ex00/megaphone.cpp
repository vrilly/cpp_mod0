// Created by Tom Jans on 27/7/20.

#include <iostream>
#include <string>

class Megaphone
{
    std::string output;
    void capitalize_string(std::string str);
public:
    Megaphone(int argc, char **argv);
    std::string get_output();
};

void Megaphone::capitalize_string(std::string str)
{
    for (unsigned long i = 0; i < str.length(); i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] ^= 0x20;
    this->output += str;
}

Megaphone::Megaphone(int argc, char **argv)
{
    if (argc <= 1) {
        this->output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return;
    }
    for (int i = 1; i < argc; i++)
        capitalize_string(argv[i]);
}

std::string Megaphone::get_output()
{
    return this->output;
}

int main(int argc, char **argv)
{
    Megaphone megaphone(argc, argv);
    std::cout << megaphone.get_output() << std::endl;
    return 0;
}