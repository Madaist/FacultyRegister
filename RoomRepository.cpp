#include "RoomRepository.hpp"

Room * RoomRepository::findByName(std::string room)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getName() == room)
			return mEntities[i];
	return NULL;
}
