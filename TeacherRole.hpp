#ifndef TEACHERROLE_HPP_INCLUDED
#define TEACHERROLE_HPP_INCLUDED

#include "Role.hpp"

class TeacherRole : public Role
{
public:
    TeacherRole() : Role(TEACHER_ROLE) {};
};

#endif // TEACHERROLE_HPP_INCLUDED
