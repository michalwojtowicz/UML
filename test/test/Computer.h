#pragma once
#include "User.h"

class Computer : public User
{
public:
	Computer(Sea *sea, Screan *sc);
	~Computer();

	void autoLocation();
	void getSize();
	void autoShot(Sea *, int x = 0, int y = 9);

private:
	int randaf(int x);
	int random(bool *t);
	bool check(int x, bool *t);
	int flag = false;
	void clean(int **p);


};

