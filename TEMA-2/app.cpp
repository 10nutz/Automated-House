#include <iostream>
#include "House.h"

using namespace std;

int main()
{
	
	House h;
	Living l;
	Bedroom b;
	Bathroom b1;
	Kitchen k;

	IRoom* r1 = &l;
	IRoom* r2 = &b;
	IRoom* r3 = &b1;
	IRoom* r4 = &k;

	h.addRoom(r1);
	h.addRoom(r2);
	h.addRoom(r3);
	h.addRoom(r4);

	h.collectRoomdata();
	h.viewRoomData();


	//cout << endl << "Delete room nr 1" << endl;;
	//h.removeRoom(1);
	//h.viewRoomData();
	
}