#include "Company.h"
#include <iostream>
#include <algorithm>

void Company::addEmployee(std::string name, std::string position, double salary)
{
    Employee new_emp(name, position, salary);
    _employees.push_back(new_emp);
}

void Company::displayEmployees() const
{
    std::for_each(_employees.begin(), _employees.end(), [](Employee emp){
        std::cout << emp.getName() << " - " << emp.getSalary() << " PLN\n"; 
    });
}

void Company::sortEmployees(std::function<bool(Employee, Employee)> comp)
{
    std::sort(_employees.begin(), _employees.end(), comp);
}

void Company::removeEmployees(std::function<bool(Employee)> crit)
{
    // cos dziwnego sie dzieje - dodatkowo printuje sie '- 8000 PLN' ?? jakby cos zostawalo w pamieci
    // std::remove_if(_employees.begin(), _employees.end(), crit);

    std::vector<Employee>::iterator it = _employees.begin();
    for (int i = 0; i < _employees.size(); i++)
    {
        it++;
        if (crit(_employees.at(i)))
            _employees.erase(it - 1);
    }
}
