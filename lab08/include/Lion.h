#pragma once

#include "Animal.h"

/** klasa reprezetujaca lwa */
class Lion : virtual public Animal
{
public:
    /** metoda ryczaca lwa */
    void roar() const override;

    /** metoda pokazujaca lwa */
    void display() const override;

    /** metoda wspinajaca lwa */
    void climb() const override;

    /** wirtualny destruktor klasy bazowej */
    virtual ~Lion(){};
};