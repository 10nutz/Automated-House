#pragma once
#include <iostream>
#include <vector>
#include "IRoom.h"
class House
{
public:
	void addRoom(IRoom *r)
	{
		r->createRoom();
		rooms.push_back(r);
	}
	void removeRoom(int i)
	{
		rooms[i]->deleteRoom();
		rooms.erase(rooms.begin()+i);
	}
	void collectRoomdata()
	{
		int i;
		for (i = 0; i < rooms.size(); i++)
		{
			rooms[i]->updateRoom();
		}
	}
	void viewRoomData()
	{
		for (int i = 0;i < rooms.size() ; i++)
			rooms[i]->readRoom();

	}
private:
	std::vector<IRoom*> rooms;
};