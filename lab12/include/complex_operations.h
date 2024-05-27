#pragma once

#include "Complex.h"

/** Funkcja szablonowa do dodawania
@param a pierwsza wartosc
@param b druga wartosc
@return zwraca wynik dodawania
*/
template <typename T>
T add(T* a, T* b)
{
    return *a + *b;
}

/** Wyspecjalizowana funkcja szablonowa do dodawania dwoch liczb zespolonych
@param a pierwsza liczba zespolona
@param b druga liczba zespolona
@return zwraca liczbe zespolona bedaca wynikiem dodawania
*/
template <>
Complex add<Complex>(Complex* a, Complex* b)
{
    return Complex(a->getRe() + b->getRe(), a->getIm() + b->getIm());
}

/** Funkcja szablonowa do mnozenia
@param a pierwsza wartosc
@param b druga wartosc
@return zwraca wynik mnozenia
*/
template <typename T>
T multiply(T* a, T* b)
{
    return (*a) * (*b);
}

/** Wyspecjalizowana funkcja szablonowa do mnozenia dwoch liczb zespolonych
@param a pierwsza liczba zespolona
@param b druga liczba zespolona
@return zwraca liczbe zespolona bedaca wynikiem mnozenia
*/
template <>
Complex multiply<Complex>(Complex* a, Complex* b)
{
    return Complex(a->getRe() * b->getRe() - a->getIm() * b->getIm(), a->getRe() * b->getIm() + a->getIm() * b->getRe());
}