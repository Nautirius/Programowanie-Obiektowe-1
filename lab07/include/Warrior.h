#pragma once

#include "State.h"
#include "Character.h"
#include <string>

/** klasa reprezetujaca wojownika */
class Warrior : public Character
{
public:
    /** konstruktor 
    @param name nazwa postaci
    */
    Warrior(std::string name);

    /** metoda zmieniajaca stan postaci 
    @param s nowy stan postaci
    @return nic nie zwraca
    */
    void set_state(int s) override;

    /** metoda zwracajaca stan postaci 
    @return stan postaci
    */
    int get_state() const override;

    /** metoda zwracajaca nazwe postaci 
    @return nazwa postaci
    */
    std::string get_name() const override;

    /** metoda atakujaca wojownika */
    void swing_sword() const;

    /** metoda idle wojownika */
    void idle() const override;

};