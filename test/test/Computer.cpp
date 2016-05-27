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
		return false;
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
	else {
		return x;
	}
}

void Computer::autoShot(Sea *seaW, int x, int y) {
	if (flag == false) {
		x = random(shotX);
		y = random(shotY);
		std::cout << "x: " << x << "y:" << y << std::endl;
		flag = shot(x, y, seaW, sc);
		if (flag == true) {
			autoShot(seaW, x, y);
		}
	}
	else {
		x = randaf(x);
		y = randaf(y);
		std::cout << "x: " << x << "y: " << y << std::endl;
		if (check(x, shotX) == true && check(y, shotY) == true) {
			std::cout << "dupa" << std::endl;
			flag = shot(x, y, seaW, sc);
			std::cout << "dupa1" << std::endl;
			if (flag == true) {
				std::cout << "dupa2" << std::endl;
				autoShot(seaW, x, y);
			}
		}
		else {
			flag = false;
			autoShot(seaW, 5, 6);
		}
	}
}
