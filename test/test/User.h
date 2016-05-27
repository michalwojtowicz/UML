#include "Screan.h"


class User
{
public:
	User(Sea *sea, Screan *sc);
	~User();
	Sea *sea;
	bool shot(int x, int y, Sea *sea, Screan *sc);
	void createShip(int size, int id);
	void printShip();
	int getI();
protected:
	bool shotX[15];
	bool shotY[15];
	Screan *sc;
	Ship *tab[5];
	int I;
private:
	void init(bool *);

};

