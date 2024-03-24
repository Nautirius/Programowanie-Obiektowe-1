#ifndef PROGRAMISTA
#define PROGRAMISTA

#include "IPracownik.h"
#include <string>

/** Klasa reprecentujaca programiste */
class Programista : public IPracownik
{
public:
    /** Konstruktor
    @param imie imie programisty
    @param nazwisko nazwisko programisty
    @param id id programisty
    @param jezyk jezyk programowania programisty
    */
    Programista(std::string imie, std::string nazwisko, int id, std::string jezyk);

    /** Metoda do przedstawiania sie */
    virtual void przedstawSie() const;

private:
    /** Skladowa przecowujaca jezyk w katorym pisze programista */
    std::string _jezyk;
};

#endif