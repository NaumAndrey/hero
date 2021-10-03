#ifndef UNIT_H
#define UNIT_H

#include <windows.h>

class Unit
{
private:
		COORD pos;
		int len;
		int vel;
		char direction;

public:
	Unit(COORD pos, int vel);
	void change_dir(char dir);
	void move_unit();
	COORD get_pas();	
};

#endif 

