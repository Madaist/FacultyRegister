#ifndef ROLE_HPP_INCLUDED
#define ROLE_HPP_INCLUDED


class Role
{
public:
    enum RoleType
    {
        STUDENT_ROLE,
        TEACHER_ROLE,
        GUEST_ROLE,
        ADMINISTRATIVE_ROLE
    };

    Role(RoleType type);

protected:
    RoleType mType;
};




#endif // ROLE_HPP_INCLUDED
