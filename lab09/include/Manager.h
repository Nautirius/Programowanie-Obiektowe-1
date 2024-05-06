#pragma once

#include "Employee.h"


/** klasa reprezetujaca managera */
class Manager : public Employee
{
public:

    /** konstruktor
    @param name imie managera
    @param salary wynagrodzenie managera
    */
    Manager(std::string name, double salary, int team_size);

    /** metoda do wyswietlania informacji o pracowniku */
    void show() const override;

protected:
    /** skladowa zawierajaca rozmiar zespolu managera*/
    int _team_size;

    /** skladowa zawierajaca range managera */
    int _isManager;

};