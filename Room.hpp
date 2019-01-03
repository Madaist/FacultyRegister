#ifndef ROOM_HPP_INCLUDED
#define ROOM_HPP_INCLUDED

#include<string>

class Room
{
public:
    Room(std::string);
    std::string getName();

    friend std::istream& operator>> (std::istream& stream, Room& ob);
    friend std::ostream& operator<< (std::ostream& stream, const Room& ob);

private:
    std::string mName;
};

#endif // ROOM_HPP_INCLUDED
