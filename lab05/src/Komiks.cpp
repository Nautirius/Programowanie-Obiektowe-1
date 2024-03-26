#include "IKsiazka.h"
#include "Komiks.h"

Komiks::Komiks(std::string title, std::string author, int id, /*std::string publisher,*/ std::string genere, int shelfId)
    : IKsiazka(title, author, id, genere, shelfId) /*,_publisher(publisher)*/{};