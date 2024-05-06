#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, std::string position, double salary) 
: _name(name), _position(position), _salary(salary)
{}

std::string Employee::getName() const
{
    return _name;
}
 
double Employee::getSalary() const
{
    return _salary;
}