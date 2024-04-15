#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name) : Character(name){}

void Warrior::set_state(int s)
{
    _state = s;
}

int Warrior::get_state() const
{
    return _state;
}

std::string Warrior::get_name() const
{
    return _name;
}

void Warrior::swing_sword() const
{
    std::cout << _name << " the Warrior swings a sword!\n";
}

void Warrior::idle() const
{
    std::cout << _name << " the Warrior is idling around.\n";
}