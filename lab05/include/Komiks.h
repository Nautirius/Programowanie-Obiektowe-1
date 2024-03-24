#pragma once

#include "IKsiazka.h"

/** Klasa reperzentująca komiks */
class Komiks : public IKsiazka
{
public:
    /** @brief Konstruktor
    @param title tytuł komiksu
    @param author autor komiksu
    @param id identyfikator komiksu
    @param publisher wydawnictwo komiksu
    @param genere gatunek komiksu
    @param shelfId identyfikator półki, na której leży komiks
    */
    Komiks(std::string title, std::string author, int id, std::string publisher, std::string genere, int shelfId);

private:
    /** Skaldowa zawierająca nazwę wydawnictwa komiksu */
    std::string _publisher;
};