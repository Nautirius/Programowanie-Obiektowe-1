#include "Wizard.h"
#include <iostream>

Wizard::Wizard(std::string name) : Character(name){}

void Wizard::set_state(int s)
{
    _state = s;
}

int Wizard::get_state() const
{
    return _state;
}

std::string Wizard::get_name() const
{
    return _name;
}

void Wizard::cast_spell() const
{
    std::cout << _name << " the Wizard casts a spell!\n";
}

void Wizard::idle() const
{
    std::cout << _name << " the Wizard is idling around.\n";
}
