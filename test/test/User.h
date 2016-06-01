


#include "Screan.h"

#include <winsock2.h>
#include <ws2tcpip.h>
#include <vector>



struct CreatShip {
	CreatShip(int a,int b,int c);
	int count = 0;
	int startx = 0;
	int starty = 0;
	char c = 'h';
};

int Find(std:: vector<CreatShip *> &, int x, int y);

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
	bool ShipCreator(int tab[10][10]);
	bool flag = false;
protected:
	bool shotX[10];
	bool shotY[10];
	Screan *sc;
	Ship *tab[15];
	int I;
private:
	SOCKET fd;
	void init(bool *);
	bool CheckUp(int tab[10][10],std:: vector<CreatShip *>& a, int i, int j);
	bool CheckBc(int tab[10][10], std::vector<CreatShip *>& a, int i, int j);
};

