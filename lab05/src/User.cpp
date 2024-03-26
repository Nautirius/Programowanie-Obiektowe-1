#include "User.h"
#include <iostream>

User::User(std::string name) : _name(name){};

std::string User::getName() const
{
    return _name;
}

void User::displayBorrowedBooks() const
{
    std::cout << "Lista wypożyczonych książek przez użytkownika:\n";
     for (IKsiazka *ksiazka : _borrowedBooks) 
    {
        std::cout << "Tytuł: " << ksiazka->_title << "\n\n";
    }
}