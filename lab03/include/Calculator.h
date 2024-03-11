#ifndef _CALC_
#define _CALC_

#include <iostream>
#include <functional>

/**
Klasa reprezentujaca kalkulator
*/
class Calculator
{
public:
    /**
    Przeladowany operator strumienia wyjscia
    @param ostream referencja do obiektu strumienia wyjscia
    @param calc const referencja obiektu typu calculator
    @return zwraca referencje do obiektu strumienia wyjscia
    */
    friend std::ostream &operator<<(std::ostream &stream, const Calculator &calc);

    /**
    Konstruktor bezargumantowy, przypisuje kalkulatorowi
    domyslna wartosc 0
    */
    Calculator();

    /**
    Przeladowany operator przypisania
    @param val nowa wartosc dla kalkuatora
    @return zwraca referencje do obiektu
    */
    Calculator &operator=(int val);

    /**
    Przeladowany operator preinkrementacji
    @return zwraca referencje do obiektu
    */
    Calculator &operator++();

    /**
    Przeladowany operator predekrementacji
    @return zwraca referencje do obiektu
    */
    Calculator &operator--();

    /**
    Przeladowany operator mnozenia
    @param val liczba przez ktora mnozymy
    @return zwraca wynik mnozenia
    */
    int operator*(int val);

    /**
    Przeladowany operator dostepu do wskaznika
    @return zwraca wskaznik do obiektu
    */
    Calculator *operator->();

    /**
    Przeladowany operator nawiasow
    @param fun funkcja do wywolania
    @return zwraca wynik funkcji dla wartosci przechowywanej w kalkulatorze
    */
    int operator()(std::function<int(int)> &fun);

    /**
    Przeladowany operator nawiasow
    @return zwraca wartosc w kalkulatorze
    */
    int operator()();

    /**
    Przeladowany operator nawiasow
    @param fun funkcja do wywolania
    @param val dodatkowy argument do wywolywanej funkcji
    @return zwraca wynik funkcji dla wartosci przechowywanej w kalkulatorze
    */
    int operator()(std::function<int(int, int)> &fun, int val);

    /**
    Przeladowany operator nawiasow
    @param fun funkcja do wywolania
    @param val1 pierwszy dodatkowy argument do wywolywanej funkcji
    @param val2 drugi dodatkowy argument do wywolywanej funkcji
    @return zwraca wynik funkcji dla przekazanych parametrow
    */
    int operator()(std::function<int(int, int)> &fun, int val1, int val2);

private:
    /**
    Skladowa zawierajaca wartosc przechowywana w kalkulatorze
    */
    int _value;
};

#endif