#pragma once

#include "FSElement.h"

/** klasa reprezentująca symboliczny link w systemie plików */
class Link : public FSElement
{
public:
    /** konstruktor 
    * @param name nazwa linku
    * @param target cel linku
    */
    Link(std::string name, FSElement *target);

    bool isDir() const override;

    /** metoda dostępowa do składowej _name
    * @return zwraca nazwę elementu
    */
    std::string GetName() const override;

    /** metoda do printowania
    * @param ind poziom wcięcia
    * @param stream strumień wyjścia
    */
    void print(int ind, std::ostream &stream) const override;

    /** destruktor */
    ~Link() = default;

    /** Przeladowany operator strumienia wyjscia
    @param ostream referencja do obiektu strumienia wyjscia
    @param file const referencja obiektu typu Link
    @return zwraca referencje do obiektu strumienia wyjscia
    */
    friend std::ostream &operator<<(std::ostream &stream, const Link &link);

private:
    /** składowa zawierająca nazwę linku */
    std::string _name;

    /** składowa zawierająca cel linku */
    FSElement *_target;
};