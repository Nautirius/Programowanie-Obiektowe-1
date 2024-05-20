#include "File.h"

File::File(std::string name) : _name(name) {};

std::string File::GetName() const
{
    return _name;
}

void File::print(int ind, std::ostream &stream) const
{
    for (int i = 0; i < ind; i++) 
        stream << "  ";
    stream << _name << " (FILE)" << "\n";
}

bool File::isDir() const
{ return false; }

std::ostream &operator<<(std::ostream &stream, const File &file)
{
    return stream << file._name;
}
