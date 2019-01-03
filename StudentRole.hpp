#ifndef STUDENTROLE_HPP_INCLUDED
#define STUDENTROLE_HPP_INCLUDED

#include "Role.hpp"
#include "StudyGroup.hpp"

class StudentRole : public Role
{
public:
    StudentRole(int id, std::string domain, StudyGroup* group );

    //void setNrCourses(int);
    void setID(int);
    void setDomain(std::string);

   // int getNrCourses();
    int getID();
    std::string getDomain();

private:
  //  int mNrCourses;
    int mID;
    std::string mDomain;
    StudyGroup* mGroup;
};


#endif // STUDENTROLE_HPP_INCLUDED
