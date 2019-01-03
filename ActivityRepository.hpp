#ifndef ACTIVITYREPOSITORY_HPP_INCLUDED
#define ACTIVITYREPOSITORY_HPP_INCLUDED

#include "Activity.hpp"
#include "Repository.hpp"

class ActivityRepository : public Repository<Activity>
{
public:
    Activity* findByOwner(Person*);
    Activity* findByLocation(Room*);
    Activity* findByDescription(std::string);
};


#endif // ACTIVITYREPOSITORY_HPP_INCLUDED
