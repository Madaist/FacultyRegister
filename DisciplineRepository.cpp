#include "DisciplineRepository.hpp"

Discipline* DisciplineRepository::findBySubject(std::string name)
{
    for ( unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getSubject() == name)
            return mEntities[i];
    return NULL;
}

Discipline* DisciplineRepository::findByType(std::string type)
{
    for ( unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getType() == type)
            return mEntities[i];
    return NULL;
}
