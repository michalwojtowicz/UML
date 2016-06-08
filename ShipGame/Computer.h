#pragma once
#include "User.h"

class Computer : public User
{
public:
	Computer(Sea *sea);
	~Computer();

	void autoLocation();
	void getSize();
	void autoShot(Sea *, int x = 0, int y = 9);

private:
	int randaf(int x);
	int random(bool *t);
	bool check(int x, bool *t);
	bool flag = false;
	void clean(int **p);


};

