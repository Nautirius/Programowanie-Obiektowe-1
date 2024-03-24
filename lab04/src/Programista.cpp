#include "IPracownik.h"
#include "Programista.h"
#include <iostream>
#include <string>

Programista::Programista(std::string imie, std::string nazwisko, int id, std::string jezyk) : IPracownik(imie, nazwisko, id), _jezyk{jezyk}
{
}

void Programista::przedstawSie() const
{
    std::cout << "Jestem programistą.\n";
    std::cout << "Mam na imię: " << _imie << " " << _nazwisko << " i mpoim numerem ID jest: " << _id << "\n";
    std::cout << "Moim jezykiem programowania jest: " << _jezyk << "\n\n";
}