#include "Tiger.h"
#include <iostream>

void Tiger::roar() const
{
    std::cout << "Roarrr, I am a tiger!\n";
}

void Tiger::display() const
{
    std::cout << "\nIt's a Tiger\n";
    climb();
}

void Tiger::climb() const
{
    std::cout << "I am able to climb!\n";
}