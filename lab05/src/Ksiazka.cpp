#include "IKsiazka.h"
#include "Ksiazka.h"

Ksiazka::Ksiazka(std::string title, std::string author, int id, std::string genere, int shelfId)
    : IKsiazka(title, author, id, genere, shelfId){};