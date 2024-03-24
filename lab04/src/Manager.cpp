#include "IPracownik.h"
#include "Manager.h"
#include <iostream>
#include <string>

Manager::Manager(std::string imie, std::string nazwisko, int id) : IPracownik(imie, nazwisko, id)
{
}

void Manager::przedstawSie() const
{
    std::cout << "Jestem managerem.\n";
    std::cout << "Mam na imię: " << _imie << " " << _nazwisko << " i mpoim numerem ID jest: " << _id << "\n\n";
}


void Manager::dodajPodwladnego(IPracownik *p)
{
    _podwladni.push_back(p);
}

void Manager::zwolnijPracownika(IPracownik *p)
{
    for(int i = 0;i<_podwladni.size(); i++)
    {
        if(p->GetId() == _podwladni[i]->GetId())
        {
            std::cout << "Zwalnianie Pamięci Testera.\n";
            delete _podwladni[i];
            _podwladni[i] = nullptr;
        }
    }
}

void Manager::wygenerujRaport()
{
    std::cout << "Generowanie raportu...\n";
    // nie lubimy testerow  >:(
    std::cout << "Firma zużywa za dużo pamięci na testerów.\n";
}

void Manager::ReleaseFromWork()
{
    for(int i =0;i<_podwladni.size(); i++)
    {
        if(_podwladni[i] != nullptr)
        {
            delete _podwladni[i];
        }
    }
}

Manager::~Manager()
{
    delete this;
}
