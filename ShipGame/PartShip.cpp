
#include "PartShip.h"
#include <iostream>

PartShip::PartShip() :stan(true), x(0), y(0) {
	std::cout << "partShip creat  " << stan << std::endl;
}


PartShip::~PartShip() {
	std::cout << "partShip deleted" << std::endl;
}

void PartShip::setStan() {
	stan = false;
}

void PartShip::setPlace(int x, int y) {
	this->x = x;
	this->y = y;
}

int PartShip::getX() {
	return x;
}

int PartShip::getY() {
	return y;
}

bool PartShip::getStan() {
	return stan;
}

void PartShip::setId(int id) {
	this->id = id;
}

int PartShip::getId() {
	return id;
}