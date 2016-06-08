#include "pair.h"
#include <unistd.h>



Pair::Pair(User *a, User *b) :a(*a), b(*b) {
	this->a.print("mam pare \n");
	this->b.print("mam pare \n");
}
Pair:: ~Pair() {
	delete(&a);
	delete(&b);
}

void Pair::start() {
	a.setFlags(0);
	b.setFlags(0);

	string msgA;
	string msgB;

	a.print("I1");
	b.print("I0");
	b.print("0");
	while (true) {
		//   usleep(10);
		if (a.sRead(msgA) == 0) {
			interpreter(msgA, a, b);
		}
		else if (b.sRead(msgB) == 0) {
			interpreter(msgB, b, a);
		}


	}
}

void Pair::interpreter(string& msg, User& userI, User& userA) {

	char c = msg[0];


	switch (c) {
	case 'S':
		userA.print(msg.c_str());
		break;
	case 'R':
		userA.print(msg.c_str());
		break;
	default:
		;
	}
	msg.clear();
}

