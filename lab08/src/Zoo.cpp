#include "Zoo.h"

void Zoo::addAnimal(Animal *a)
{
    [=, this]()
    { 
        this->animals.push_back(a);
    }();
}

void Zoo::makeAllAnimalsRoar() const
{
    auto l = [](Animal *a){ a->roar(); };

    [=, this]()
    { 
        for(auto a : animals)
        {
            l(a);
        }
    }();
}

void Zoo::displayAnimals() const
{
    auto l = [](Animal *a){ a->display(); };

    [=, this]()
    { 
        for(auto a : animals)
        {
            l(a);
        }
    }();
}
