#pragma once

#include <string>
#include "FSElement.h"

/** klasa reprezentująca plik w systemie plików */
class File : public FSElement
{
public:
    /** konstruktor 
    * @param name nazwa pliku
    */
    File(std::string name);

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
    ~File() = default;

    /**
    Przeladowany operator strumienia wyjscia
    @param ostream referencja do obiektu strumienia wyjscia
    @param file const referencja obiektu typu File
    @return zwraca referencje do obiektu strumienia wyjscia
    */
    friend std::ostream &operator<<(std::ostream &stream, const File &file);

private:
    /** składowa zawierająca nazwę pliku */
    std::string _name;
};