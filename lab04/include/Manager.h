#ifndef MANAGER
#define MANAGER

#include "IPracownik.h"
#include <string>
#include <vector>

/** Klasa reprecentujaca managera */
class Manager : public IPracownik
{
public:
    /** Konstruktor
    @param imie imie managera
    @param nazwisko nazwisko managera
    @param id id managera
    */
    Manager(std::string imie, std::string nazwisko, int id);

    /** Metoda do przedstawiania sie */
    virtual void przedstawSie() const;

    /** Metoda dodajaca podwladnego
    @param p wskaznik do pracownika
    */
    void dodajPodwladnego(IPracownik *p);

    /** Metoda zwalniajaca podwladnego
    @param p wskaznik do pracownika
    */
    void zwolnijPracownika(IPracownik *p);

    /** Metoda generujaca raport */
    void wygenerujRaport();

    /** Metoda zwalniajaca pamiec */
    void ReleaseFromWork();

    /** Destruktor */
    ~Manager();

private:
    /** Skladowa przechowujaca pozwladnych managera */
    std::vector<IPracownik *> _podwladni;
};

#endif