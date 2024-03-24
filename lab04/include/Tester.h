#ifndef TESTER
#define TESTER

#include "IPracownik.h"
#include <string>

/** Klasa reprecentujaca testera */
class Tester : public IPracownik
{
public:
    /** Konstruktor
    @param imie imie testera
    @param nazwisko nazwisko testera
    @param id id testera
    @param autoTest czy tester automatyzuje testy
    */
    Tester(std::string imie, std::string nazwisko, int id, bool autoTest);

    /** Metoda do przedstawiania sie */
    virtual void przedstawSie() const;

private:
    /** Skladowa przecowujaca informacje o tym czy tester automatyzuje testy */
    bool _autoTest;
};

#endif