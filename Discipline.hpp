#ifndef DISCIPLINE_HPP_INCLUDED
#define DISCIPLINE_HPP_INCLUDED

#include "Activity.hpp"
#include <vector>
#include<string>

class Discipline
{
public:
    Discipline(){};
    Discipline(std::string subject, std::string type, std::vector<Activity*> activities);

    std::string getSubject();
    std::string getType();

    void setSubject(std::string);
    void setType(std::string);

    friend std::istream& operator >> (std::istream& stream, Discipline& ob);
    friend std::ostream& operator << (std::ostream& stream, const Discipline& ob);

private:
    std::string mSubject;
    std::string mType;
    std::vector<Activity*> mActivities;
    int mPresences;
};

#endif // DISCIPLINE_HPP_INCLUDED
