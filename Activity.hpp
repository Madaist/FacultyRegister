#ifndef ACTIVITY_HPP_INCLUDED
#define ACTIVITY_HPP_INCLUDED

#include <string>
#include "Room.hpp"
#include "Person.hpp"

class Activity
{
public:
    Activity(){};
    Activity(Room*, Person*, std::string);

    Room* getRoom() const;
    Person* getOwner() const;
    std::string getDescription() const;

    friend std::istream& operator >> (std::istream& stream, Activity& ob);
    friend std::ostream& operator << (std::ostream& stream, const Activity& ob);

private:
    Room* mLocation;
    Person* mOwner;
    std::string mDescription;

};

#endif // ACTIVITY_HPP_INCLUDED
