#pragma once

// #include "FSElement.h"
#include "Dir.h"

/** klasa reprezetujaca uzytkownika */
class User
{
public:
    /** konstruktor 
    * @param name nazwa uzytkownika
    * @param homedir katalog uzytkownika
    */
    User(std::string name, Dir *homedir);

    /** metoda dostępowa do składowej _name
    * @return zwraca nazwę uzytkownika
    */
    std::string GetName() const;

    /** metoda dostępowa do składowej _homedir
    * @return zwraca katalog domowy uzytkownika
    */
    Dir* GetHomedir() const;

private:
   /** składowa zawierająca nazwę uzytkownika */
    std::string _name;
    /** składowa zawierająca katalog domowy uzytkownika */
    Dir *_homedir;

};