#pragma once
#include "Ship.h"

class Screan
{
public:
	Screan();
	~Screan();

	void setField(int x, int y, int stan);
	void print();
	void printInt();
	void clean();
	void read(const Sea *sea);

private:
	bool tab[10][10];
	int tabInt[10][10];

};

