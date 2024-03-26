#pragma once

#include "IKsiazka.h"
#include "User.h"
#include <string>
#include <vector>

class IKsiazka;
class User;

/** Klasa reprezentująca biblioteke */
class Library
{
public:
    /** @brief Konstruktor */
    // Library();

    /** Metoda dodajaca nowa pozycje do biblioteki
    @param material referencja do noewgo materialu
    */
    void addMaterial(IKsiazka *material);

    /** Metoda wypoyczajaca pozycje
    @param title tytul pozycji
    @param user referencja do uzywkownika
    */
    void borrowBook(std::string title, User &user);

    /** Metoda zwracajaca pozycje
    @param title tytul pozycji
    @param user referencja do uzywkownika
    */
    void returnBook(std::string title, User &user);

    /** Metoda wyswietlajaca wszystkie pozycje w bibliotece */
    void displayAllBooks() const;

    /** @brief Destruktor 
    Zwalnia pamiec
    */
    ~Library();


private:
    /** Składowa zawierająca pozycje w bibliotece */
    std::vector<IKsiazka*> _books;
};