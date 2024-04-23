#include "Liger.h"
#include <iostream>

void Liger::roar() const
{
    std::cout << "Roarrr, I am a liger!\n";
}

void Liger::display() const
{
    std::cout << "\nIt's a Liger\n";

    climb();
}

void Liger::climb() const
{
    // Liger jest i Tigerem i Lionem
    // i na potrzebe Displayu postanowil pokazac sie 
    // od tej swojej lepszej strony
    Tiger::climb();
}