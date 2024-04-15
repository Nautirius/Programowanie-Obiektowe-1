#pragma once

/** klasa State, która przechowywuje stan postaci */
class State
{
public:
    /** skladowe reprezetujaca stan postaci */
    const static int Idle = 0;
    const static int Attacking = 1;
    const static int Defending = 2;
    const static int Resting = 3;
};