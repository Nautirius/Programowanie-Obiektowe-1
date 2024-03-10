#ifndef _PLAYER_CHARACTER_
#define _PLAYER_CHARACTER_

#include "GameObject.h"
#include "Renderable.h"
#include "gutils.h"

class PlayerCharacter : public GameObject, public Renderable
{
public:
    void Attack();
};

#endif