#include "IKsiazka.h"
#include <iostream>

IKsiazka::IKsiazka(std::string title, std::string author, int id, std::string genere, int shelfId)
    : _title(title), _author(author), _id(id), _genere(genere), _shelfId(shelfId), _status(1){};

void IKsiazka::wyswietlInformacje() const
{
    std::cout << "Mój tytuł: " << _title << ", autor: " << _author
              << ", id: " << _id << ", gatunek: " << _genere
              << ", leżę na półce: " << _shelfId << "\n";
}

std::string IKsiazka::getTitle() const
{
    return _title;
}