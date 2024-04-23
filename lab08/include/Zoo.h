#pragma once

#include "Animal.h"
#include <vector>

/** klasa reprezetujaca zoo */
class Zoo
{
public:
    /** metoda dodajaca zwierze do zoo
    @param [in] a zwierze do dodania
    */
    void addAnimal(Animal *a);

    /** metoda sprawiajaca ze wszystkie zwierzta rycza */
    void makeAllAnimalsRoar() const;

    /** metoda pokazujaca wszystkie zwierzeta */
    void displayAnimals() const;

private:
    /** skladowa przechowujaca wszystkie zwierzeta */
    std::vector<Animal*> animals;
};