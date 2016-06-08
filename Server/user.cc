#include "user.h"
#include <unistd.h>
#include <errno.h>

User::User(int fd) : fd(fd) {
}
User:: ~User() {
	cout << "usunienty" << endl;
	close(fd);
}

void  User::print(const char* s) {
	string st = s;
	write(fd, s, st.length());
}

void User::setFlags(int t) {
	int flags = fcntl(fd, F_GETFL, 0);

	if (fcntl(fd, F_SETFL, O_NONBLOCK | flags) < 0) {
		cerr << "blad z O_NONBLOCK" << endl;
	}
}

int User::sRead(string& buff) {
	char tmpBuff[120];

	int nbytes = read(fd, tmpBuff, sizeof(tmpBuff));

	if (nbytes < 0) {
		if (!(errno & EAGAIN)) {
			cerr << "blad z read" << endl;
			exit(1);
		}
		return -1;
	}

	buff += string(tmpBuff, tmpBuff + nbytes);

	if (tmpBuff[nbytes] == '~') {
		return 0;
	}
	return 0;

}

int User::getfd() {
	return fd;
}

void User::setfdR(int t) {
	fdR = t;
}