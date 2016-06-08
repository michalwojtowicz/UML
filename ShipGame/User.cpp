#include "User.h"
#include <iostream>
#include <string>
#include <vector>


#pragma comment (lib, "Ws2_32.lib")
User::User(Sea *sea) : sea(sea), I(0) {
	std::cout << "created user" << std::endl;
	init(shotX);
	init(shotY);
}
User::User(Sea *sea,SOCKET fd) : sea(sea), I(0), fd(fd) {
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
	this->x = x;
	this->y = y;
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

bool User::Mshot(int x, int y) {
	this->x = x - 1;
	this->y = y - 1;

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
	
	bool result = NULL;

	if (flag == false) {
		Sleep(1000);
	}

	if ((recv_size = recv(fd, server_reply, 120, 0)) == SOCKET_ERROR)
	{
		puts("recv failed");
	}
	if (server_reply[0] == 'I') {
		std::cout << "1" << std::endl;
		if (server_reply[1] == '1') {
			std::cout << "2" << std::endl;
			flag = true;
			return true;
		}
		else {
			std::cout << "3" << std::endl;
			flag = false;
			return true;
		}
	}
	else if (server_reply[0] == 'S') {
		std::cout << "4" << std::endl;
		int x = (int)server_reply[1] - 1;
		int y = (int)server_reply[2] - 1;
		std::cout << "x = " << x;
		bool t = shot(x, y, sea, sc);
		if (t == true) {
			std::cout << "5" << std::endl;
			message = const_cast<char*>("RT");
			if (send(fd, message, 2, 0) < 0)
			{
				puts("Send failed");
				return false;
			}
			result = true;
		}
		else {
			message = const_cast<char*>("RF");
			flag = true;
			std::cout << "6" << std::endl;
			if (send(fd, message, 2, 0) < 0)
			{
				puts("Send failed");
				return false;
			}
			result = false;
		}
	}
	else if (server_reply[0] == 'R') {
		std::cout << "7" << std::endl;
		if (server_reply[1] == 'T') {
			std::cout << "8" << std::endl;
			flag = true;
			result = true;
		}
		else {
			std::cout << "9" << std::endl;
			flag = false;
			result = false;
		}
	}
	puts("Reply received\n");

	server_reply[recv_size] = '\0';
	puts(server_reply);
	std::string reply_string = std::string(server_reply);

	if (reply_string == "czekaj na pare \nmam pare \nI00") {

		return true;
	}
	else if (reply_string == "czekaj na pare \n") {

		return false;
	}
	if (reply_string == "mam pare \n") {
		Check();
		return true;
	}

	if (result == true) {

		return true;
	} else if (result == false){
			
		return false;
	}
}

CreatShip::CreatShip(int a, int b, int c) : count(a), startx(b), starty(c) {
	std::cout << "create CreateShipa" << std::endl;

}

bool User::ShipCreator(int tabP[10][10]) {
	std::vector<CreatShip *>a;

	for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			std::cout << tabP[o][l];
		}
		std::cout << std::endl;
	}

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
		std::cerr << "dupa" << std::endl;
		createShip(a[i]->count, i);
		tab[i]->move(a[i]->starty, a[i]->startx, a[i]->c);
		std::cout << " SSx = " << a[i]->starty << "SSy = " << a[i]->startx << a[i]->count << std::endl;
	}
	return true;
}

bool User::CheckUp(int tab[10][10], std::vector<CreatShip *>&a, int i, int j) {
	if (tab[i][j] == 1) {
		std::cout << "UP" << "y = " << i << "x = " << j << std::endl;
		if (i > 0 && tab[i - 1][j] == 1) {
			std::cout << "up" << "y = " << i << "x = " << j << std::endl;
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
int Find(std::vector<CreatShip *> &a, int x, int y) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->startx == x && a[i]->starty == y) {
			std::cout << "x" << a[i]->startx << "y" << a[i]->starty << std::endl;
			return i;
		}
	}
	return -1;
}

bool User::CheckBc(int tab[10][10], std::vector<CreatShip *>&a, int i, int j) {
	if (tab[i][j] == 1) {
		std::cout << "BC" << "x = " << j << "y=" << i << std::endl;
		if (j > 0 && tab[i][j - 1] == 1) {
			std::cout << "bc" << "x = " << j << "y=" << i << std::endl;
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
























