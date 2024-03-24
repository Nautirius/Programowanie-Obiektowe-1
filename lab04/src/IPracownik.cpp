#include "IPracownik.h"
#include <iostream>

IPracownik::IPracownik(std::string imie, std::string nazwisko, int id)
{
    _imie = imie;
    _nazwisko=nazwisko;
    _id=id;
}

int IPracownik::GetId() const
{
    return _id;
}

void IPracownik::przedstawSie() const
{
    std::cout << "Jestem pracownikiem.\n";
}