#include "ActivityRepository.hpp"


Activity* ActivityRepository::findByOwner(Person* p)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getOwner() == p)
            return mEntities[i];
    return NULL;
}

Activity* ActivityRepository::findByLocation(Room* r)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getRoom() == r)
            return mEntities[i];
    return NULL;
}

Activity* ActivityRepository::findByDescription(std::string desc)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getDescription() == desc)
            return mEntities[i];
    return NULL;
}
