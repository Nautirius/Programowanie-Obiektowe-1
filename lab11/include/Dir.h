#pragma once

#include <string>
#include <algorithm>
#include "FSElement.h"

/** klasa reprezentująca katalog w systemie plików */
class Dir : public FSElement
{
public:
    /** konstruktor 
    * @param name nazwa katalogu
    */
    Dir(std::string name);

    /** metoda wyświetlająca listę podkatalogów
    * @param lvl liczba poziomów do wyświetlenia
    */
    void listDirs(int lvl) const;

    /** metoda dodająca element do katalogu
    * @param el wskaźnik do nowego elementu
    */
    void add(FSElement *el);

    /** metoda wyszukująca podkatalog
    * @param name nazwa szukanego podkatalogu
    * @return wskaźnik do znalezionego podkatalogu
    */
    Dir* findDir(std::string name) const;

    /** przeładowany operator dodawania nowego podkatalogu
    * @param el wskaźnik do nowego elementu
    */
    void operator+=(FSElement *el);

    /** metoda informujaca o tym czy to jest Dir */
    bool isDir() const override;

    /** metoda do printowania
    * @param ind poziom wcięcia
    * @param stream strumień wyjścia
    */
    void print(int ind, std::ostream &stream) const override;

    /** metoda dostępowa do składowej _name
    * @return zwraca nazwę elementu
    */
    std::string GetName() const override;

    /** metoda dostępowa do składowej _subdirs
    * @return zwraca nazwę elementu
    */
    std::vector<FSElement*> GetSubdirs() const;

    /** destruktor */
    ~Dir();

    /**
    Przeladowany operator strumienia wyjscia
    @param ostream referencja do obiektu strumienia wyjscia
    @param dir const referencja obiektu typu Dir
    @return zwraca referencje do obiektu strumienia wyjscia
    */
    friend std::ostream &operator<<(std::ostream &stream, const Dir &dir);


private:
    /** składowa zawierająca nazwę katalogu */
    std::string _name;

    /** składowa zawierająca listę podkatalogów */
    std::vector<FSElement*> _subdirs;

};