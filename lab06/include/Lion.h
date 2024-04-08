#pragma once

#include "Animal.h"

/** Klasa reprezentujaca lwa */
class Lion : public Animal
{
public:
    /** Metoda do wydawania dzwieku */
    void makeSound() const override;

    /** Metoda do jedzenia */
    void eat() const override;

    /** Metoda do interakcji z innymi zwierzetami
    @param other wskaznik do zwierzecia z ktorym bedziemy wchodzic w interakcje
    */
    void interact(Animal *other) const override;

    /** Metoda do uzywania umiejetnosci zwierzecia */
    void useSkill() const override;

    /** Umiejetnosc lwa */
    void hyperVoice() const;

    /** Metoda sluzaca do identyfikacji gatunku zwierzecia */
    std::string identify() const override;

    /** destruktor */
    ~Lion();
};