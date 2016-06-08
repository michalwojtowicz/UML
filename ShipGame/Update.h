#pragma once
#include <User.h>
#include <qthread.h>

class Update: public QThread
{
	Q_OBJECT
public:

	void run();
	Update(User *user);
	~Update();

signals:
	void waitSignal(void);
	void changeSignal(int x, int y);
	void noChangeSignal(int x, int y);

private:

	User *user;
	bool init = true;
};

