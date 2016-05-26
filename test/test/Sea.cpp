#include "stdafx.h"
#include "Sea.h"
#include <iostream>

Sea::Sea() : I(0){
}

Sea::~Sea(){
	std::cout << "sea deleted" << std::endl;
}

void Sea::addPart(PartShip *p) {
	std::cout << "dodany part do mapy" << std::endl;
	tab[I++] = p;
	std::cout << "dodany I " << I << std::endl;
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
