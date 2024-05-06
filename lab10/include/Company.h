#pragma once

#include "Employee.h"
#include <vector>
#include <string>
#include <functional>

/** klasa reprecetujaca firme */
class Company
{
public:
    /** metoda dodajaca nowego pracownika
    @param name imie pracownika
    @param position stanowisko pracownika
    @param salary wynagrodzenie pracownika
    */
    void addEmployee(std::string name, std::string position, double salary);

    /** metoda wyswietlajaca wszystkich pracownikow */
    void displayEmployees() const;

    /** metoda sortujaca pracownikow
    @param comp funkcja porownujaca
    */
    void sortEmployees(std::function<bool(Employee, Employee)> comp);

    /** metoda usuwajaca pracownikow spelniajacych kryteria
    @param crit funkcja okreslajaca czy pracownik spelnia kryterium usuniecia
    */
    void removeEmployees(std::function<bool(Employee)> crit);


private:
    /** skladowa przechowujaca pracownikow */
    std::vector<Employee> _employees;
};