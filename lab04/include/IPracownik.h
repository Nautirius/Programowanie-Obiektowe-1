#ifndef I_PRACOWNIK
#define I_PRACOWNIK

#include <string>

/** Klasa reprecentujaca interfejs pracownika */
class IPracownik
{
public:
    /** Konstruktor
    @param imie imie pracownika
    @param nazwisko nazwisko pracownika
    @param id id pracownika
    */
    IPracownik(std::string imie, std::string nazwisko, int id);

    /**Metoda do przedstawiania sie */
    void virtual przedstawSie() const;

    /**Metoda dostepowa do pola _id */
    int GetId() const;

protected:
    /** Skladowa przecowujaca imie pracownika */
    std::string _imie;

    /** Skladowa przecowujaca nazwisko pracownika */
    std::string _nazwisko;

    /** Skladowa przecowujaca id pracownika */
    int _id;
};

#endif