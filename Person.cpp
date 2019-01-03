#include "Person.hpp"

Person::Person(std::vector<Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email = "")
    :mEmail(Email)
{
    mRoles = Roles;
    mCNP = CNP;
    mLastName = LastName;
    mFirstName = FirstName;
}

void Person::setCNP(std::string CNP)
{
    mCNP = CNP;
}

std::string Person::getCNP() const
{
    return mCNP;
}

void Person::setFirstName(std::string FirstName)
{
    mFirstName = FirstName;
}

std::string Person::getFirstName() const
{
    return mFirstName;
}

void Person::setLastName(std::string LastName)
{
    mLastName = LastName;
}

std::string Person::getLastName() const
{
    return mLastName;
}

void Person::setEmail(std::string Email)
{
    mEmail = Email;
}

std::string Person::getEmail() const
{
    return mEmail;
}

void Person::addRole(Role *role)
{
    mRoles.push_back(role);
}

std::istream& operator>>(std::istream& stream, Person& ob)
{
    stream >> ob.mCNP >> ob.mFirstName >> ob.mLastName >> ob.mEmail;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Person& ob)
{
    stream << ob.mCNP << ", " << ob.mFirstName << " " << ob.mLastName << ", " << ob.mEmail << '\n';
    return stream;
}
