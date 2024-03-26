#pragma once

#include <string>

/** Klasa będąca interfacem reprezentującym książkę */
class IKsiazka
{
public:
    friend class Library;
    friend class User;

    /** @brief Konstruktor
    @param title tytuł książki
    @param author autor książki
    @param id identyfikator książki
    @param genere gatunek książki
    @param shelfId identyfikator półki, na której leży książka
    */
    IKsiazka(std::string title, std::string author, int id, std::string genere, int shelfId);
    /** Metoda wirtualna wyświetlająca informacje o książce */
    virtual void wyswietlInformacje() const;

    /** Metoda dostepowa skladowej _title
    @return zwraca wartosc skladowej _title
    */
    virtual std::string getTitle() const;


protected:
    /** Składowa zawierająca tytuł książki */
    std::string _title;
    /** Składowa zawierająca autora książki */
    std::string _author;
    /** Składowa zawierająca identyfikator książki */
    int _id;
    /** Składowa zawierająca gatunek książki */
    std::string _genere;
    /** Składowa zawierająca informację o półce,
     *  na której znajduje się książka */
    int _shelfId;
    /** Składowa zawierająca informację o tym,
     *  czy ksiazka jest dostepna */
    int _status;
};