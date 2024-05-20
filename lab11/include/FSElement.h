#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Type.h"

/** klasa reprezentująca element systemu plików */
class FSElement
{
public:
    /** metoda tworząca listę podelementów o określonym typie
    * @param lvl poziom zagłębienia poszukiwania
    * @param type typ szukanych plików
    * @param els wektor do którego będą zapisywane znalezione pliki
    */
    void getFSElements(const std::vector<FSElement*> &sub, int lvl, Type type, std::vector<FSElement*> &els) const;

    /** metoda dostępowa do składowej _name
    * @return zwraca nazwę elementu
    */
    virtual std::string GetName() const = 0;

    /** metoda do sprawdzania czy mamy do czynienia z katalogiem */
    virtual bool isDir() const = 0;

    /** metoda do printowania
    * @param ind poziom wcięcia
    * @param stream strumień wyjścia
    */
    virtual void print(int ind, std::ostream &stream) const = 0;

    /** wirtualny destruktor */
    virtual ~FSElement() = default;
};