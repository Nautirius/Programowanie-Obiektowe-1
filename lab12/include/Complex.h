#pragma once
#include <iostream>

/** Klasa reprezetujaca liczbe zespolona */
class Complex
{
public:
    /** Konstruktor
    @param re czesc rzeczywista liczby zespolonej
    @param im czesc urojona liczby zespolonej
    */
    Complex(double re, double im);

    /** getter pola _re
    @return zwraca wartosc pola _re
    */
    double getRe() const;

    /** getter pola _im
    @return zwraca wartosc pola _im
    */
    double getIm() const;

    /** przeladowany operator strumienia wyjscia
    @param out referencja do obiektu strumienia wyjscia
    @param c const referencja obiektu typu Complex
    @return zwraca referencje do obiektu strumienia wyjscia
    */
    friend std::ostream& operator<<(std::ostream &out, const Complex &c);


private:
    /** skladowa reprezetujaca czesc rzeczywista liczby zespolonej */
    double _re;
    
    /** skladowa reprezetujaca czesc urojona liczby zespolonej */
    double _im;
};