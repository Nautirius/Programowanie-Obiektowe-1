#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, double salary) : _name(name), _salary(salary), _isManager(0)
{}

std::string Employee::getName() const
{
    return _name;
}
 
double Employee::getSalary() const
{
    return _salary;
}

int Employee::getIsManager() const
{
    return _isManager;
}

void Employee::show() const
{
    std::cout << _name << " zarabia " << _salary << " PLN\n";
}

Employee::~Employee(){};