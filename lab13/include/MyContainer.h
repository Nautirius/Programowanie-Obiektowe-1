#pragma once

#include <vector>
#include <iostream>
#include <algorithm>

/** klasa reperezetujaca kontener */
template<typename T>
class MyContainer
{
public:
    /** metoda dodajaca nowy element do kontenera 
    @param element dodawany element
    @return nic nie zwraca
    */
    void add(const T& element);

    /** metoda usuwajaca element z kontenera 
    @param index indeks elementu do usuniecia
    @return nic nie zwraca
    */
    void remove(int index);

    /** metoda zwracajaca wartosc elementu z kontenera 
    @param index indeks elementu do zwrocenia
    @return element kontenera
    */
    T get(int index) const;

    /** metoda zwracajaca ilosc elementow w kontenerze 
    @return ilosc elementow kontenera
    */
    int size() const;

    /** metoda wyswietlajaca wszystkie elementy znajdujace sie w kontenerze
    @return nic nie zwraca
    */
    void print() const;

private:
    /** skladowa przechowujaca elementy kontenera */
    std::vector<T> _elements;
};


/** wyspecjalizowana klasa reprezetujaca kontener przechowujacy wskazniki */
template<typename T>
class MyContainer<T*>
{
public:
    /** metoda dodajaca nowy element do kontenera 
    @param element dodawany element
    @return nic nie zwraca
    */
    void add(T* const& element);

    /** metoda usuwajaca element z kontenera 
    @param index indeks elementu do usuniecia
    @return nic nie zwraca
    */
    void remove(int index);

    /** metoda zwracajaca wartosc elementu z kontenera 
    @param index indeks elementu do zwrocenia
    @return element kontenera
    */
    T* get(int index) const;

    /** metoda zwracajaca ilosc elementow w kontenerze 
    @return ilosc elementow kontenera
    */
    int size() const;

    /** metoda wyswietlajaca wszystkie elementy znajdujace sie w kontenerze
    @return nic nie zwraca
    */
    void print() const;

private:
    /** skladowa przechowujaca elementy kontenera */
    std::vector<T*> _elements;
};


template<typename T>
void MyContainer<T>::add(const T& element)
{
    _elements.push_back(element);
}

template<typename T>
void MyContainer<T>::remove(int index)
{
    // jezeli index jest poprawny
    if (index >= 0 && index < _elements.size()) 
    {
        _elements.erase(_elements.begin() + index);
    } 
    else 
    {
        std::cout<< "Index out of range" << "\n";
    }
}

template<typename T>
T MyContainer<T>::get(int index) const
{
    // jezeli index jest poprawny
    if (index >= 0 && index < _elements.size()) 
    {
        return _elements[index];
    } 
    else 
    {
        std::cout << "Index out of range" << "\n";
        return T();
    }
}

template<typename T>
int MyContainer<T>::size() const
{
    return _elements.size();
}

template<typename T>
void MyContainer<T>::print() const
{
    std::for_each(_elements.begin(), _elements.end(), [=](T el) 
    {
        std::cout << el << " ";
    });
    std::cout << "\n";
}

// specjalizacja dla kontenera pzechowujacego wskazniki
template<typename T>
void MyContainer<T*>::add(T* const& element)
{
    _elements.push_back(element);
}

template<typename T>
void MyContainer<T*>::remove(int index)
{
    // jezeli index jest poprawny
    if (index >= 0 && index < _elements.size()) {
        _elements.erase(_elements.begin() + index);
    } 
    else
    {
        std::cout<< "Index out of range" << "\n";
    }
}

template<typename T>
T* MyContainer<T*>::get(int index) const
{
    // jezeli index jest poprawny
    if (index >= 0 && index < _elements.size())
    {
        return _elements[index];
    } 
    else 
    {
        std::cout << "Index out of range" << "\n";
        // zwraca nullptr dla niepoprawnego indeksu
        return nullptr; 
    }
}

template<typename T>
int MyContainer<T*>::size() const
{
    return _elements.size();
}

template<typename T>
void MyContainer<T*>::print() const
{
    std::for_each(_elements.begin(), _elements.end(), [=](T *el) 
    {
        if (el)
        {
            std::cout << *el << " ";
        }
        else
        {
            std::cout << "nullptr ";
        }
    });
    std::cout << "\n";
}