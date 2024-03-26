#pragma once

#include "IKsiazka.h"

/** Klasa reprezentująca czasopismo */
class Czasopismo : public IKsiazka
{
public:
    /** @brief Konstruktor
    @param title tytuł czasopisma
    @param author autor czasopisma
    @param id identyfikator czasopisma
    @param genere gatunek czasopisma
    @param shelfId identyfikator półki, na której leży czasopismo
    */
    Czasopismo(std::string title, std::string author, int id, std::string genere, int shelfId);

private:
};