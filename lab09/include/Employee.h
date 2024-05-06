#pragma once

#include <string>

/** klasa reprezetujaca pracownika */
class Employee
{
public:
    /** konstruktor
    @param name imie pracownika
    @param salary wynagrodzenie pracownika
    */
    Employee(std::string name, double salary);

    /** metoda dostepowa do pola _imie
    @return zwraca skladowa _imie
    */
    virtual std::string getName() const;

    /** metoda dostepowa do pola _salary
    @return zwraca skladowa _salary
    */
    virtual double getSalary() const;

    /** metoda dostepowa do pola _isManager
    @return zwraca skladowa _isManager
    */
    virtual int getIsManager() const;

    /** metoda do wyswietlania informacji o pracowniku */
    virtual void show() const;

    /** wirtualny destruktor */
    virtual ~Employee();

protected:
    /** skladowa zawierajaca imie pracownika */
    std::string _name;

    /** skladowa zawierajaca wynagrodzenie pracownika */
    double _salary;

    /** skladowa zawierajaca range pracownika */
    int _isManager;

};