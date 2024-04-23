#pragma once

/** klasa abstrakcyjna reprezetujaca zwierze */
class Animal
{
public:
    /** metoda ryczaca zwierzecia */
    virtual void roar() const = 0;

    /** metoda pokazujaca zwierze */
    virtual void display() const = 0;

    /** metoda wspinajaca zwierzecia */
    virtual void climb() const = 0;

    /** wirtualny destruktor klasy bazowej */
    virtual ~Animal(){};

};