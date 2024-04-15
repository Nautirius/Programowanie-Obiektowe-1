#include "Thief.h"
#include <iostream>

Thief::Thief(std::string name) : Character(name){}

void Thief::set_state(int s)
{
    _state = s;
}

int Thief::get_state() const
{
    return _state;
}

std::string Thief::get_name() const
{
    return _name;
}

void Thief::idle() const
{
    std::cout << _name << " the Thief is idling around.\n";
}