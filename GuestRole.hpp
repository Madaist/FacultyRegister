#ifndef GUESTROLE_HPP_INCLUDED
#define GUESTROLE_HPP_INCLUDED

#include "Role.hpp"

class GuestRole : public Role
{
public:
    GuestRole() : Role(GUEST_ROLE) {};
};

#endif // GUESTROLE_HPP_INCLUDED
