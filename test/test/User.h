#include "Screan.h"
#include <winsock2.h>
#include <ws2tcpip.h>

class User
{
public:
	User(Sea *sea, Screan *sc);
	User(Sea *sea, Screan *sc,SOCKET fd);
	~User();
	Sea *sea;
	bool shot(int x, int y, Sea *sea, Screan *sc);
	void createShip(int size, int id);
	void printShip();
	int getI();
	bool Mshot(int x, int y);
	bool Check();
protected:
	bool shotX[15];
	bool shotY[15];
	Screan *sc;
	Ship *tab[5];
	int I;
private:
	SOCKET fd;
	void init(bool *);

};

