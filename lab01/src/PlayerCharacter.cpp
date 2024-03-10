#include <iostream>
#include <typeinfo>
#include <boost/core/demangle.hpp>
#include "PlayerCharacter.h"

void PlayerCharacter::Attack()
{
    std::cout << boost::core::demangle(typeid(*this).name()) << " attacking!\n";
}