#ifndef ROOMREPOSITORY_HPP_INCLUDED
#define ROOMREPOSITORY_HPP_INCLUDED
#include "Room.hpp"
#include "Repository.hpp"
#include<vector>

class RoomRepository : public Repository<Room>
{
public:
	Room* findByName(std::string);
};


#endif // ROOMREPOSITORY_HPP_INCLUDED
