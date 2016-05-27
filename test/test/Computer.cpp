#include "stdafx.h"
#include "Computer.h"
#include <iostream>

Computer::Computer(Sea *sea, Screan *sc) : User(sea, sc) {
	std::cout << "create Computer" << std::endl;
}


Computer::~Computer()
{
}

void Computer::autoLocation() {
	int tabInt[10][10];

	for (int i = 0; i < I; i++) {

		tab[i]->move(rand() % 10, rand() % 10, 'h');
	}
	for (int i = 0; i < 5; i++) {
		sc->read(sea);
		sc->print();
		for (int j = 0; j < I; j++) {
			tab[j]->autoMove();
		}
	}

}

void Computer::clean(int **tab) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			tab[i][j] = 0;
		}
	}
}

int Computer::random(bool *t) {
	int z;
	bool stan = false;
	for (int i = 0; i < 20 && stan == false; i++) {
		z = rand() % 15;
		stan = check(z, t);
	}
	return z;
}
bool Computer::check(int x, bool *t) {

	if (t[x] == false) {
		t[x] = true;
		return true;
	}
	else {
		false;
	}
}

int Computer::randaf(int x) {
	x = (rand() % 3) + (x - 1);
	if (x < 0) {
		return 0;
	}
	else if (x > 9) {
		return 9;
	}
}

