#include "Dir.h"
#include <iostream>

Dir::Dir(std::string name) : _name(name) {};

void Dir::listDirs(int lvl) const
{
    std::vector<FSElement*> els;
    FSElement::getFSElements(_subdirs, lvl, Type::DIR, els);

    std::cout << _name << " ";

    for (FSElement* el : els) 
    {
        std::cout << el->GetName() << " ";
    }
    std::cout << "\n";

    // if (lvl == 0)
    // {
    //     return;
    // }
    
    // for (FSElement* el : _subdirs)
    // {
    //     if (el->isDir()) {
    //         if (lvl>=0) {
    //             static_cast<Dir*>(el)->listDirs(lvl-1);
    //         }
    //     }
    // }
}

void Dir::add(FSElement *el)
{
    _subdirs.push_back(el);
}

void Dir::operator+=(FSElement *el)
{
    add(el);
}

bool Dir::isDir() const
{ return true; }

Dir* Dir::findDir(std::string name) const
{
    for (FSElement* el : _subdirs)
    {
        if (el->isDir())
        {
            if(el->GetName() == name)
            {
                return static_cast<Dir*>(el);
            }
            else 
            {
                for (FSElement* el2 : static_cast<Dir*>(el)->GetSubdirs())
                {
                    if (el2->isDir() && el2->GetName() == name)
                    {
                        return static_cast<Dir*>(el2);
                    }
                    // rekurencja?
                    // static_cast<Dir*>(el)->findDir(name);
                }            
            }
        }
    }
    return nullptr;
}

Dir::~Dir()
{
    for (FSElement* el : _subdirs)
    {
       delete el;
    }
}

std::ostream &operator<<(std::ostream &stream, const Dir &dir)
{
    dir.print(0, stream);
    return stream;
}

void Dir::print(int ind, std::ostream &stream) const
{
    for (int i = 0; i < ind; i++) 
        std::cout << "  ";
    std::cout << _name << " (DIR)" << "\n";
    for (FSElement* el : _subdirs)
    {
        el->print(ind + 1, stream);
    }
}

std::string Dir::GetName() const
{
    return _name;
}

std::vector<FSElement*> Dir::GetSubdirs() const
{
    return _subdirs;
}