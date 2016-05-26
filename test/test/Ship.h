#include "PartShip.h"
#include "Sea.h"


class Ship
{
public:
	Ship(int size, Sea *sea, int id);
	~Ship();

	int move(int x, int y, char direction);
	void print();
	void autoMove();

private:
	int corect(int x);
	int vec(int x);
	int id;
	void addPart(PartShip *p);
	Sea *sea;
	int I;
	int size;
	PartShip tab[5];
};


