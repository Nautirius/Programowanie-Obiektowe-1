#include "IPracownik.h"
#include "Tester.h"
#include <iostream>
#include <string>

Tester::Tester(std::string imie, std::string nazwisko, int id, bool autoTest) : IPracownik(imie, nazwisko, id), _autoTest{autoTest}
{
}

void Tester::przedstawSie() const
{
    std::cout << "Jestem testerem.\n";
    std::cout << "Mam na imię: " << _imie << " " << _nazwisko << " i mpoim numerem ID jest: " << _id << "\n";
    std::cout << "A odpowiedź na to, czy automatyzuję testy brzmi - " << (_autoTest ? "tak" : "nie") << "\n\n";
}