#include "Dictionary.h"
#include <string>
#include <vector>

int Dictionary::FindIndex(std::string idx) const
{
    if(_vect.size()>0)
    {
        for(int i=0; i<_indices.size(); i++)
        {
            if(_indices[i]==idx)
            {
                return i;
            }
        }
    }

    return -1;
}

void Dictionary::add(std::string idx, int value)
{
    int i = FindIndex(idx);
    if(i != -1)
    {
        // znaleziono indeks 
        _vect[i] = value;
    }
    else
    {
        // nie znaleziono indeksu - dodajemy nowy element
        _indices.push_back(idx);
        _vect.push_back(value);
    }
}

void Dictionary::remove(std::string idx)
{
    int i = FindIndex(idx);
    if(i != -1)
    {
        // jesli znalezioni indeks to zerujemy wartosc
        // co jest interpretowane jako usuniecie jej ze slownika
        _vect[i] = 0;
    }
}

const int& Dictionary::operator[](std::string idx) const
{
    int i = FindIndex(idx);
    if(i != -1)
    {
        // znaleziono indeks 
        return _vect[i];
    }
    else
    {
        // nie znaleziono indeksu - zwracamy domyslna wartosc
        return _defaultValue;
    }
}

Dictionary&& Dictionary::move()
{
    return std::move(*this);
}

Dictionary::Dictionary(Dictionary &&other)
{
    _vect = std::move(other._vect);
    _indices = std::move(other._indices);
}

Dictionary::Dictionary()
{
    // ustawiam domyslna wartosc dla nie znalezionego elementu na 0
    _defaultValue = 0;
}