#pragma once

#include "IKsiazka.h"

/** Klasa reperzentująca książkę */
class Ksiazka : public IKsiazka
{
public:
    /** @brief Konstruktor
    @param title tytuł książki
    @param author autor książki
    @param id identyfikator książki
    @param genere gatunek książki
    @param shelfId identyfikator półki, na której leży książka
    */
    Ksiazka(std::string title, std::string author, int id, std::string genere, int shelfId);

private:
};