
#include "Sea.h"
#include <iostream>

Sea::Sea() : I(0) {
}

Sea::~Sea() {
	std::cout << "sea deleted" << std::endl;
}

void Sea::addPart(PartShip *p) {
	std::cout << "dodany part do mapy" << std::endl;
	tab[I++] = p;
	std::cout << "dodany I " << I << std::endl;
}

int Sea::partMove(PartShip *p, int *vx, int *vy) {
	int t = p->getId();
	int x = p->getX();
	int y = p->getY();
	float suma = 0;


	for (int i = 0; i < I; i++) {
		if (t == tab[i]->getId()) {
			continue;
		}
		int dx = (x - tab[i]->getX());
		int dy = (y - tab[i]->getY());
		if (dx == x && dy == t) {
			return -1000;
		}
		*vx += dx;
		*vy += dy;

		float dystans = sqrt((dx * dx) + (dy * dy)) + 1;
		suma += 2 / dystans;
	}
	return(int)suma;
}


void Sea::printSea() {
	for (int i = 0; i < I; i++) {
		std::cout << tab[i]->getX();
	}
}

int  Sea::getI() const {
	return I;
}

bool Sea::check(int x, int y) {
	for (int i = 0; i < I; i++) {
		if (tab[i]->getX() == x  && tab[i]->getY() == y) {
			tab[i]->setStan();
			return true;
		}
	}
	return false;
}
