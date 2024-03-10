#ifndef DICT
#define DICT
#include <string>
#include <vector>

/**
Klasa zawierajaca implementacje slownika
*/
class Dictionary
{
public:

    /** @brief Konstruktor domyslny
    W tym konstruktorze zdecydowalem sie zainicjalizowac domyslna wartosc
    tak, by mozna bylo zwrocic wartosc dla indeksu string, 
    ktory nie istnieje w slowniku
    */
    Dictionary();

    /**
    Dodaje nowy element do slownika
    @param [in] idx string index
    @param [in] value nowa wartosc
    */
    void add(std::string idx, int value);

    /**
    Usuwa element ze slownika
    @param [in] idx string index wartosci do usuniecia
    */
    void remove(std::string idx);

    /**
    Przeladowany operator subskrybcji tablicy 
    @param [in] idx string index wartosci do odczytania
    @return zwraca const referencje do wartosci ze slownika
    Const bo w zadaniu nie ma przykladu zmiany wartosci w slowniku
    poza uzyciem funkcji Remove
    */
    const int& operator[](std::string idx) const;

    /**
    Funkcja implementujaca semantyke przenoszenia
    @return zwraca rvalue referencje do slownika
    */
    Dictionary&& move();

    /**
    Konstruktor przenoszacy
    @param [in] other rvalue referencja do slownika z ktorego przenosimy
    */
    Dictionary(Dictionary &&other);

    /**
    Funkcja wyszukujaca indeks wartosci po string index
    @param [in] idx string index
    @return zwraca indeks wartosci int sparowanej ze stringiem
    */
    int FindIndex(std::string idx) const;

private:
    /**
    skladowa zawierajaca wartosci int
    */
    std::vector<int> _vect;

    /**
    skladowa zawierajaca indeksy typu string
    */
    std::vector<std::string> _indices;

    /**
    skladowa zawierajaca domyslna wartosc
    */
    int _defaultValue;
};

#endif