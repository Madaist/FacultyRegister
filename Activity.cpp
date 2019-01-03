#include "Activity.hpp"

Activity::Activity(Room *room, Person *person, std::string description)
{
    mLocation = room;
    mOwner = person;
    mDescription = description;
}

Room* Activity::getRoom() const
{
    return mLocation;
}

Person* Activity::getOwner() const
{
    return mOwner;
}

std::string Activity::getDescription() const
{
    return mDescription;
}

std::istream& operator >> (std::istream& stream, Activity& ob)
{
    std::cin >> *dynamic_cast<Room*>(ob.mLocation);
    std::cin >> *dynamic_cast<Person*>(ob.mOwner);
    std::cin >> ob.mDescription;
    return stream;
}

std::ostream& operator << (std::ostream& stream, const Activity& ob)
{
    std::cout << ob.mDescription << " - ";
    std::cout << *dynamic_cast<Room*> (ob.mLocation);
    std::cout << *dynamic_cast<Person*> (ob.mOwner);
    return stream;
}
