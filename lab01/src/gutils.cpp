#include <iostream>
#include <typeinfo>
#include <boost/core/demangle.hpp>
#include "gutils.h"
#include "PlayerCharacter.h"

void gutils::handleGameObject(GameObject *obj)
{
    // std::cout << "Rendering " << boost::core::demangle(typeid(*dynamic_cast<GameObject *>(obj)).name()) << "\n";
    std::cout << "Rendering GameObject\n";

    PlayerCharacter *player_char = dynamic_cast<PlayerCharacter *>(obj);
    player_char->Attack();
}

void gutils::handleRenderable(Renderable *ren)
{
    // std::cout << "Drawing " << boost::core::demangle(typeid(*ren).name()) << "\n";
    std::cout << "Drawing Renderable\n";

    PlayerCharacter *player_char = dynamic_cast<PlayerCharacter *>(ren);
    player_char->Attack();
    // std::cout << boost::core::demangle(typeid(*player_char).name()) << " attacking!\n";
}