#pragma once

#include <string>

/** Klasa będąca interfacem reperzentującym książkę */
class IKsiazka
{
public:
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
};
// std::ostream &operator<<(std::ostream &stream, const Calculator &calc)
// {
//     stream << calc._value;
//     return stream;
// }