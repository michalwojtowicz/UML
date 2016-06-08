#ifndef QHOVERSENSITIVEBUTTON_H
#define QHOVERSENSITIVEBUTTON_H

#include <QtWidgets>
#include <QDebug>
#include <QPushButton>
#include <string>
#include <iostream>

enum kierunek {
	pion,
	poziom,
	mieszanePoziom,
	mieszanePion,
	mieszane,
};

class QHoverSensitiveButton : public QPushButton
{

public:
	QPushButton *buttonListPoziom[3];
	QPushButton *buttonListPion[3];
	bool ustawiono = false;
	int liczbaStatkow;
	int *ilosc;
	bool *czyPion;

	explicit QHoverSensitiveButton();

	explicit QHoverSensitiveButton(kierunek k, QPushButton *button1, QPushButton *button2,
		QPushButton *button3, int *ilosc, bool *czyPion, QWidget *parent = 0);
	explicit QHoverSensitiveButton(kierunek k, QPushButton *button1, QPushButton *button2, int *ilosc, bool *czyPion, QWidget *parent = 0);
	explicit QHoverSensitiveButton(kierunek k, QPushButton *button1, int *ilosc, bool *czyPion, QWidget *parent = 0);

	explicit QHoverSensitiveButton(int *ilosc, bool *czyPion, QWidget *parent = 0);

	explicit QHoverSensitiveButton(QPushButton *button1, QPushButton *button2,
		QPushButton *button3, QPushButton *button4, QPushButton *button5,
		QPushButton *button6, int *ilosc, bool *czyPion, QWidget *parent = 0);
	explicit QHoverSensitiveButton(kierunek k, QPushButton *button1, QPushButton *button2,
		QPushButton *button3, QPushButton *button4, QPushButton *button5, int *ilosc, bool *czyPion, QWidget *parent = 0);
	explicit QHoverSensitiveButton(kierunek k, QPushButton *button1, QPushButton *button2,
		QPushButton *button3, QPushButton *button4, int *ilosc, bool *czyPion, QWidget *parent = 0);


	void setUstawiono(bool ustawiono = true);
	void ustawionoToList();
	void setLiczbaStatkow(int liczbaStatkow);

protected:
	void hoverEnter(QHoverEvent *event);
	void hoverLeave(QHoverEvent *event);
	void hoverMove(QHoverEvent *event);
	bool event(QEvent *event);
	void setVisible();

signals:

	public slots :
};

#endif // QHOVERSENSITIVEBUTTON_H