
#include "stdafx.h"
#include "Screan.h"

#include <iostream>

Screan::Screan(){
	for (int i = 0; i < 10; ++i) {

		for (int j = 0; j < 10; ++j) {
			tab[i][j] = false;
			tabInt[i][j] = 0;
		}
	}
}


Screan::~Screan(){
}

void Screan::print() {
	std::cout << "mapa z moimi statkami" << std::endl;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j <10; ++j) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void Screan::printInt() {
	std::cout << "mapa do ztrza³u" << std::endl;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j <10; ++j) {
			std::cout << tabInt[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void Screan::clean() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			tab[i][j] = false;
		}
	}
}

void Screan::read(const Sea *sea) {
	int x;
	int y;
	PartShip *p;
	int I = sea->getI();
	for (int i = 0; i < I; i++) {
		p = sea->tab[i];
		x = p->getX();
		y = p->getY();
		tab[y][x] = p->getStan();
	}

}

void Screan::setField(int x, int y, int stan) {
	tabInt[y][x] = stan;
}