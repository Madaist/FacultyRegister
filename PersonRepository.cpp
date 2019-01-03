#include "PersonRepository.hpp"

Person * PersonRepository::findByFullName(std::string lName, std::string fName)
{
    for ( unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getLastName() == lName && mEntities[i]->getFirstName() == fName)
            return mEntities[i];
    return NULL;
}

Person * PersonRepository::findByCNP(std::string cnp)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getCNP() == cnp)
            return mEntities[i];
    return NULL;
}
