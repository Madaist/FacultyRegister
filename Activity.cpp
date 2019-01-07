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
    stream >> *dynamic_cast<Room*>(ob.mLocation);
    stream >> *dynamic_cast<Person*>(ob.mOwner);
    stream >> ob.mDescription;
    return stream;
}

std::ostream& operator << (std::ostream& stream, const Activity& ob)
{
    stream << ob.mDescription << " - ";
    stream << *dynamic_cast<Room*> (ob.mLocation);
    stream << *dynamic_cast<Person*> (ob.mOwner);
    return stream;
}
