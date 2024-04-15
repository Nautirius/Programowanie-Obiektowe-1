#pragma once

#include "State.h"
#include "Character.h"
#include <string>

/** klasa reprezetujaca czarodzieja */
class Wizard : public Character
{
public:
    /** konstruktor 
    @param name nazwa postaci
    */
    Wizard(std::string name);

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

    /** metoda rzucajaca zaklecie czarodzieja */
    void cast_spell() const;

    /** metoda idle czarodzieja */
    void idle() const override;
};