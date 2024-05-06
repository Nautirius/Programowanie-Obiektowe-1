#pragma once

#include <string>

/** klasa reprezetujaca pracownika */
class Employee
{
public:
    /** konstruktor
    @param name imie pracownika
    @param position stanowisko pracownika
    @param salary wynagrodzenie pracownika
    */
    Employee(std::string name, std::string position, double salary);

    /** metoda dostepowa do pola _imie
    @return zwraca skladowa _imie
    */
    std::string getName() const;

    /** metoda dostepowa do pola _salary
    @return zwraca skladowa _salary
    */
    double getSalary() const;

private:
    /** skladowa zawierajaca imie pracownika */
    std::string _name;

    /** skladowa zawierajaca stanowisko pracownika */
    std::string _position;

    /** skladowa zawierajaca wynagrodzenie pracownika */
    double _salary;

};