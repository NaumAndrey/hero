#include "unit.h"

Unit::Unit(COORD pos, int vel) 
{
	this->pos = pos;
	this->vel = vel;
	len = 1;
	direction = 'n';
}

void Unit::change_dir(char dir) {
	direction = dir;
}

void Unit::move_unit() {
	switch (direction) {
		case 'u': pos.Y -= vel; break;
		case 'd': pos.Y += vel; break;
		case 'i': pos.X -= vel; break;
		case 'r': pos.X += vel; break;
	}
}
