#pragma once

#include <string>
#include "State.h"

/** klasa Character, ktora jest bazową klasą dla różnych typów postaci */
class Character
{
public:
    /** konstruktor */
    Character(std::string name);

    /** metoda zmieniajaca stan postaci 
    @param s nowy stan postaci
    @return nic nie zwraca
    */
    virtual void set_state(int s);

    /** metoda zwracajaca stan postaci 
    @return stan postaci
    */
    virtual int get_state() const;

    /** metoda zwracajaca nazwe postaci 
    @return nazwa postaci
    */
    virtual std::string get_name() const;

    /** metoda idle postaci */
    virtual void idle() const;

protected:
    /** skladowa przechowujaca stan postaci */
    int _state;
    /** skladowa przechowujaca nazwe postaci */
    std::string _name;
};