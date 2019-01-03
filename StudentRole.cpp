#include "StudentRole.hpp"

StudentRole::StudentRole(int id = 0, std::string domain = "CTI", StudyGroup* group = NULL)
    : Role(STUDENT_ROLE)
{
    mID = id;
    mDomain = domain;
    mGroup = group;
}

/*
void StudentRole::setNrCourses(int number)
{
    mNrCourses = number;
}*/

void StudentRole::setID(int id)
{
    mID = id;
}

void StudentRole::setDomain(std::string domain)
{
    mDomain = domain;
}

/*
int StudentRole::getNrCourses()
{
    return mNrCourses;
}*/

int StudentRole::getID()
{
    return mID;
}

std::string StudentRole::getDomain()
{
    return mDomain;
}
