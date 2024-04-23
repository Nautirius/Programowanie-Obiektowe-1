#include "Lion.h"
#include <iostream>

void Lion::roar() const
{
    std::cout << "Roarrr, I am a lion!\n";
}

void Lion::display() const
{
    std::cout << "\nIt's a Lion\n";
    climb();
}

void Lion::climb() const
{
    std::cout << "I am not able to climb!\n";
}