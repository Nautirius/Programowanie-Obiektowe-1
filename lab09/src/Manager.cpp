#include "Manager.h"
#include <iostream>

Manager::Manager(std::string name, double salary, int team_size) : Employee(name, salary), _team_size(team_size), _isManager(1)
{}

void Manager::show() const
{
    std::cout << _name << " zarabia " << _salary << " PLN i " << _salary*0.1*_team_size << " PLN premii managera\n";
}