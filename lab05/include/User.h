#pragma once

#include "IKsiazka.h"
#include "Library.h"
#include <string>
#include <vector>

class IKsiazka;

/** Klasa reprezentująca uzytkownika */
class User
{
public:
    friend class Library;

    /** @brief Konstruktor
    @param name imie i nazwisko uzytkownika
    */
    User(std::string name);

    /** Metoda dostepowa skladowej _name
    @return zwraca wartosc skladowej _name 
    */
    std::string getName() const;

    /** Metoda wyswietlajaca pozycje wyozyczone przez uzytkownika */
    void displayBorrowedBooks() const;

private:
    /** Składowa zawierająca imie i nazwisko uzytkownika */
    std::string _name;
    /** Składowa zawierająca pozycje wypozyczone przez uzytkownika */
    std::vector<IKsiazka*> _borrowedBooks;
};