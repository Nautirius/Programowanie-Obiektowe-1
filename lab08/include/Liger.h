#pragma once

#include "Lion.h"
#include "Tiger.h"

/** klasa reprezetujaca ligera */
class Liger : public Lion, public Tiger
{
public:
    /** metoda ryczaca ligera */
    void roar() const override;

    /** metoda pokazujaca ligera */
    void display() const override;

    /** metoda wspinajaca ligera */
    void climb() const override;
};