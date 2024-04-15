#include "Character.h"
#include <iostream>

Character::Character(std::string name) : _name(name){}

void Character::set_state(int s)
{
    _state = s;
}

int Character::get_state() const
{
    return _state;
}

std::string Character::get_name() const
{
    return _name;
}

void Character::idle() const
{
    std::cout << _name << " the Character is idling around.\n";
}