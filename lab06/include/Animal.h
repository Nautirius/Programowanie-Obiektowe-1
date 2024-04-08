#pragma once

#include <string>

/** Klasa abstrakcyjna reprezentujaca zwierze */
class Animal
{
public:
    /** Metoda do wydawania dzwieku */
    virtual void makeSound() const = 0;

    /** Metoda do jedzenia */
    virtual void eat() const = 0;

    /** Metoda do interakcji z innymi zwierzetami 
    @param other wskaznik do zwierzecia z ktorym bedziemy wchodzic w interakcje
    */
    virtual void interact(Animal* other) const = 0;

    /** Metoda do uzywania umiejetnosci zwierzecia */
    virtual void useSkill() const = 0;

    /** Metoda sluzaca do identyfikacji gatunku zwierzecia 
    @return zwraca nazwe gatunku zwierzecia
    */
    virtual std::string identify() const = 0;

    /** wirtualny destruktor */
    virtual ~Animal();
};