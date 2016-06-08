#include "Update.h"
#include <iostream>

void Update::run()
{
	bool result;
	while (true) {

		if (init == true) {
			if (user->Check() == true) {

				emit waitSignal();
				init = false;
			}
		}
		else {

			result = user->Check();
			if (result == true) {

				emit noChangeSignal(user->x,user->y);
			}
			else if (result== false) {

				emit changeSignal(user->x,user->y);
			}
		}
	}
	/*
	while (true) {
		if (user->flag == false) {
			user->Check();
		}
	} */
}

Update::Update(User *user)
{
	std::cout << "TWORZE WATEK" << std::endl;
	this->user = user;
}

Update::~Update()
{
}
