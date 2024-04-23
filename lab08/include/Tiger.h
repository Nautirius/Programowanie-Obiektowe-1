#pragma once

#include "Animal.h"

/** klasa reprezetujaca tygrysa */
class Tiger : virtual public Animal
{
public:
    /** metoda ryczaca tygrysa */
    void roar() const override;

    /** metoda pokazujaca tygrysa */
    void display() const override;

    /** metoda wspinajaca tygrysa */
    void climb() const override;

    /** wirtualny destruktor klasy bazowej */
    virtual ~Tiger(){};
};