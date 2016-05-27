#include "stdafx.h"
#include "User.h"
#include <iostream>


User:: User(Sea *sea, Screan *sc) : sea(sea), sc(sc), I(0) {
	std::cout << "created user" << std::endl;
	init(shotX);
	init(shotY);
}


User::~User() {

	for (int i = 0; i < I; i++) {
		delete(tab[i]);
	}
}

void User::init(bool *t) {
	for (int i = 0; i < 15; i++) {
		t[i] = false;
	}
}

bool User::shot(int x, int y, Sea *sea, Screan *sc) {
	if (sea->check(x, y) == true) {
		std::cout << "true" << std::endl;
		sc->setField(x, y, 9);
		return true;
	}
	else {
		std::cout << "false" << std::endl;
		sc->setField(x, y, 1);
		return false;
	}
}

void User::createShip(int size, int id) {
	Ship *s = new Ship(size, sea, id);
	tab[I++] = s;
}

void User::printShip() {
	for (int i = 0; i < I; i++) {
		tab[i]->print();
	}
}

int User::getI() {
	return I;
}

