#pragma once

#include "FSElement.h"
#include "User.h"
#include <vector>

/** funkcja szukajca asynchronicznie pliku 
* @param user uzytkownik dla ktorego wykonujemy przeszukiwanie
* @param fileName nazwa pliku ktorego szukamy
* @return lista znalezionych wynikow
*/
std::vector<FSElement*> performAsyncUserSearch(const User *user, const std::string &fileName);

/** funkcja szukajca pliku 
* @param element katalog ktory przeszukujemy
* @param fileName nazwa pliku ktorego szukamy
* @param user uzytkownik dla ktorego wykonujemy przeszukiwanie
* @return lista znalezionych wynikow
*/
std::vector<FSElement*> searchFiles(const FSElement *element, const std::string &fileName, const User *user);