#include "IKsiazka.h"
#include "Czasopismo.h"

Czasopismo::Czasopismo(std::string title, std::string author, int id, std::string genere, int shelfId)
    : IKsiazka(title, author, id, genere, shelfId){};