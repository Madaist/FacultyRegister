#include "Room.hpp"

Room::Room(std::string name)
{
    mName = name;
}

std::string Room::getName()
{
    return mName;
}

std::istream& operator>> (std::istream& stream, Room& ob)
{
    stream >> ob.mName;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Room& ob)
{
    stream << ob.mName << '\n';
    return stream;
}
