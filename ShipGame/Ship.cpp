#include "Ship.h"
#include <iostream>


Ship::Ship(int size, Sea *sea, int id) :size(size), I(0), sea(sea), id(id) {
	std::cout << "creat statek" << std::endl;
	for (int i = 0; i < size; ++i) {
		tab[i].setId(id);
		addPart(&tab[i]);
	}
}

Ship::~Ship() {
	//delete[] tab;
}

void Ship::addPart(PartShip *p) {
	std::cout << "PartShip" << std::endl;
	sea->addPart(p);
}

int Ship::move(int x, int y, char diredtion) {
	std::cout << "x = " << x << "y = " << y << std::endl;
	x = corect(x);
	y = corect(y);
	std::cout << "Cx = " << x << "Cy = " << y << std::endl;

	for (int i = 0; i < size; ++i) {
		if (diredtion == 'v') {
			tab[i].setPlace(x, y + i);
		}
		else if (diredtion == 'h') {
			tab[i].setPlace(x + i, y);
		}
		else {
			std::cout << "blad zle dane" << std::endl;
		}
	}
	return 0;
}

void Ship::print() {
	for (int i = 0; i < size; i++) {
		std::cout << tab[i].getX() << " " << tab[i].getY() << std::endl;
	}
}

int Ship::vec(int x) {
	if (x >= 0) {
		return 1;
	}
	else {
		return -1;
	}
}

int Ship::corect(int x) {
	if (x < 0) {
		x = 0;
	}
	else if (x >= 9) {
		x = 9;
		x -= size;
	}
	return x;
}

void Ship::autoMove() {
	int sum = 0;
	int vectorX = 0;
	int vectorY = 0;
	for (int i = 0; i < size; ++i) {
		int plus = sea->partMove(&tab[i], &vectorX, &vectorY);
		if (plus == -1000) {
			this->move(rand() % 10, rand() % 10, 'h');
			std::cout << "tysiaoc" << std::endl;
			return;
		}
		sum += plus;
	}
	vectorX = vec(vectorX);
	vectorY = vec(vectorY);
	int k = sum;
	std::cout << "x:" << tab[0].getX() + (sum * vectorX) << "y: " << tab[0].getY() + (sum * vectorY) << std::endl;
	this->move(tab[0].getX() + (sum * vectorX), tab[0].getY() + (sum * vectorY), 'h');
}

