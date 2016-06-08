#include "stdafx.h"
#include "User.h"
#include <iostream>
#include <vector>


User:: User(Sea *sea, Screan *sc) : sea(sea), sc(sc), I(0) {
	std::cout << "created user" << std::endl;
	init(shotX);
	init(shotY);
}
User::User(Sea *sea, Screan *sc,SOCKET fd) : sea(sea), sc(sc), I(0),fd(fd) {
	std::cout << "created user" << std::endl;
	init(shotX);
	init(shotY);
}



User::~User() {

	for (int i = 0; i < I; i++) {
		delete(tab[i]);
	}
}

void User::init(bool *t) {
	for (int i = 0; i < 15; i++) {
		t[i] = false;
	}
}

bool User::shot(int x, int y, Sea *sea, Screan *sc) {
	if (sea->check(x, y) == true) {
		std::cout << "true" << std::endl;
		
		return true;
	}
	else {
		std::cout << "false" << std::endl;
		
		return false;
	}
}

void User::createShip(int size, int id) {
	Ship *s = new Ship(size, sea, id);
	tab[I++] = s;
}

void User::printShip() {
	for (int i = 0; i < I; i++) {
		tab[i]->print();
	}
}

bool User:: Mshot(int x,int y) {
	char px = (char)x;
	char py = (char)y;
	char message[3];
	message[0] = 'S';
	message[1] = px;
	message[2] = py;
	
	if (send(fd, message, 3, 0) < 0)
	{
		puts("Send failed");
		return false;
	}
	
	return true;

}

bool User::Check() {
	int recv_size;
	char server_reply[120];
	char *message;
	std:: cout << "check" << std::endl;

	if ((recv_size = recv(fd, server_reply, 120, 0)) == SOCKET_ERROR)
	{
		puts("recv failed");
	}
	if (server_reply[0] == 'I') {
		if (server_reply[1] == '1') {
			flag = true;
		
		}
		else {
			flag = false;
		}
	}

	else if (server_reply[0] == 'S') {
		std:: cout << "duap" << std:: endl;
		int x = (int)server_reply[1];
		x = x - 1;
		int y = (int)server_reply[2];
		y = y - 1;
		bool t = shot(x,y,sea ,sc);
		std::cout << x << "  " << y<< std::endl;
	
		if (t == true) {
			message = const_cast<char*>("RT");
			if (send(fd, message, 2, 0) < 0)
			{
				puts("Send failed");
				return false;
			}
			flag = false;
		}
		else {
			message = const_cast<char*>("RF");
			flag = true;
			if (send(fd, message, 2, 0) < 0)
			{
				puts("Send failed");
				return false;
			}
		}
	}
	else if (server_reply[0] == 'R') {
		if (server_reply[1] == 'T') {
			flag = true;
			std::cout << "trafiony" << std:: endl;
		}
		else {
			flag = false;
			std::cout << "pudlo" << std::endl;
		}
	}

	puts("Reply received\n");

	server_reply[recv_size] = '\0';
	puts(server_reply);


}

CreatShip:: CreatShip(int a, int b,int c) : count(a),startx(b),starty(c)  {
	std::cout << "create CreateShipa" << std::endl;

}

bool User::ShipCreator(int tabP[10][10]) {
	std::vector<CreatShip *>a;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (tabP[i][j] == 1) {
				if (Find(a, j, i) == -1) {
					if (!CheckUp(tabP, a, i, j)) {
						CheckBc(tabP, a, i, j);
					}
				}
			}
		}
	}
	
	for (int i = 0; i < a.size(); i++) {
		std::cerr << "dupa" << std:: endl;
		createShip(a[i]->count, i);
		tab[i]->move(a[i]->starty, a[i]->startx, a[i]->c);
		std::cout << " SSx = " << a[i]->starty << "SSy = " << a[i]->startx <<a[i] -> count <<  std::endl;
	}
	return true;
}

bool User::CheckUp(int tab[10][10],std:: vector<CreatShip *>&a,int i,int j) {
	if (tab[i][j] == 1) {
	std::cout << "UP" << "y = " << i <<"x = " << j <<std::endl;
		if (i > 0 && tab[i - 1][j] == 1) {
			std::cout << "up" << "y = " << i << "x = "<< j <<std::endl;
			CheckUp(tab, a, (i - 1), j);
		}
		else if (i == 0 || tab[i - 1][j] == 0) {
			int I = 0;
			I = Find(a, i, j);
				if (I != -1) {
					std::cout << "trueUP" << std::endl;
					a[I]->count++;
					a[I]->c = 'v';
					return true;
				}
				else {
					std::cout << "falseUP" << std::endl;
					return false;
				}
		}
	}
	std::cout << "falseUPW" << std::endl;
	return true;
}
int Find(std:: vector<CreatShip *> &a, int x, int y) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->startx == x && a[i]->starty == y) {
			std::cout << "x" << a[i] -> startx <<"y" <<a[i] -> starty << std::endl;
			return i;
		}
	}
	return -1;
}

bool User::CheckBc(int tab[10][10], std::vector<CreatShip *>&a, int i, int j) {
	if (tab[i][j] == 1) {
		std::cout << "BC" << "x = " << j << "y=" << i << std::endl;
		if (j > 0 && tab[i][j - 1] == 1) {
			std::cout << "bc" <<"x = "<< j<<"y=" << i<< std::endl;
			CheckBc(tab, a, i, j - 1);
		}
		else if (j == 0 || tab[i][j - 1] == 0) {
			int I = 0;
			I = Find(a, i, j);
			if (I != -1) {

				a[I]->count++;
				a[I]->c = 'h';
				return true;
			}
			else {
				a.push_back(new CreatShip(1, i, j));
				std::cout << "falseBC" << std::endl;
				return false;
			}
		}
	}
	std::cout << "falseUPW" << std::endl;
	return false;
}
























