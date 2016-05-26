#pragma once
class PartShip
{
public:
	PartShip();
	~PartShip();
	void setStan();
	void setPlace(int x, int y);
	int getX();
	int getY();
	bool getStan();
	void setId(int id);
	int getId();
private:
	int id;
	bool stan;
	int x;
	int y;
};

