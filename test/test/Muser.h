
#include <winsock2.h>
#include "Screan.h"

class Muser{
public:
	Muser(Sea *sea, Screan *sc,SOCKET s);
	~Muser();
	SOCKET s;
};

