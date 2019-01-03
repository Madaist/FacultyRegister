#include "Discipline.hpp"

Discipline::Discipline(std::string subject, std::string type, std::vector<Activity*> activities)
{
    mSubject = subject;
    mType = type;
    mActivities = activities;
}

std::string Discipline::getSubject()
{
    return mSubject;
}

std::string Discipline::getType()
{
    return mType;
}

void Discipline::setSubject(std::string name)
{
    mSubject = name;
}

void Discipline::setType(std::string type)
{
    mType = type;
}


