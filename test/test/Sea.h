#include "PartShip.h"


class Sea{
public:
	Sea();
	~Sea();
	void addPart(PartShip *p);
	void printSea();
	int getI()const;
	bool check(int x, int y);
	PartShip *tab[30];
	int partMove(PartShip *p, int *, int *);
private:
	int I;
};

