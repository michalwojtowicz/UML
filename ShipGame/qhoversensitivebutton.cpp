#include "qhoversensitivebutton.h"

QHoverSensitiveButton::QHoverSensitiveButton()
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	buttonListPoziom[0] = nullptr;
	buttonListPoziom[1] = nullptr;
	buttonListPoziom[2] = nullptr;

	buttonListPion[0] = nullptr;
	buttonListPion[1] = nullptr;
	buttonListPion[2] = nullptr;

	czyPion = nullptr;
	ilosc = nullptr;
}

QHoverSensitiveButton::QHoverSensitiveButton(kierunek k, QPushButton *button1, QPushButton *button2,
	QPushButton *button3, int *ilosc, bool *czyPion, QWidget *parent) : QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	if (k == poziom) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[2] = dynamic_cast<QPushButton*>(button3);

		buttonListPion[0] = nullptr;
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;
	}
	else if (k == pion) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = dynamic_cast<QPushButton*>(button3);

		buttonListPoziom[0] = nullptr;
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;

	} if (k == mieszanePion) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = nullptr;

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button3);
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;
	}
	else if (k == mieszanePoziom) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button3);
		buttonListPoziom[2] = nullptr;
	}

}

QHoverSensitiveButton::QHoverSensitiveButton(kierunek k, QPushButton * button1, QPushButton * button2, int *ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	if (k == poziom) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[2] = nullptr;

		buttonListPion[0] = nullptr;
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;

	}
	else if (k == pion) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = nullptr;

		buttonListPoziom[0] = nullptr;
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;

	}
	else if (k == mieszane) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;
	}

}

QHoverSensitiveButton::QHoverSensitiveButton(kierunek k, QPushButton * button1, int *ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	if (k == poziom) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;

		buttonListPion[0] = nullptr;
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;
	}
	else if (k == pion) {

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;

		buttonListPoziom[0] = nullptr;
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;


	}
	else if (k == mieszanePoziom) {

	}
}

QHoverSensitiveButton::QHoverSensitiveButton(int *ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);
	buttonListPoziom[0] = nullptr;
	buttonListPoziom[1] = nullptr;
	buttonListPoziom[2] = nullptr;

	buttonListPion[0] = nullptr;
	buttonListPion[1] = nullptr;
	buttonListPion[2] = nullptr;
}

QHoverSensitiveButton::QHoverSensitiveButton(QPushButton * button1, QPushButton * button2, QPushButton * button3, QPushButton * button4, QPushButton * button5,
	QPushButton * button6, int * ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	buttonListPoziom[0] = dynamic_cast<QPushButton*>(button4);
	buttonListPoziom[1] = dynamic_cast<QPushButton*>(button5);
	buttonListPoziom[2] = dynamic_cast<QPushButton*>(button6);

	buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
	buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
	buttonListPion[2] = dynamic_cast<QPushButton*>(button3);
}

QHoverSensitiveButton::QHoverSensitiveButton(kierunek k, QPushButton * button1, QPushButton * button2, QPushButton * button3, QPushButton * button4,
	QPushButton * button5, int * ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	if (k == mieszanePoziom) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button3);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button4);
		buttonListPoziom[2] = dynamic_cast<QPushButton*>(button5);

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = nullptr;

	}
	else if (k == mieszanePion) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button4);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button5);
		buttonListPoziom[2] = nullptr;

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = dynamic_cast<QPushButton*>(button3);

	}
}

QHoverSensitiveButton::QHoverSensitiveButton(kierunek k, QPushButton * button1, QPushButton * button2,
	QPushButton * button3, QPushButton * button4, int * ilosc, bool *czyPion, QWidget * parent) :QPushButton(parent), ilosc(ilosc), czyPion(czyPion)
{
	setMouseTracking(true);
	setAttribute(Qt::WA_Hover);

	if (k == poziom) {
		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[2] = dynamic_cast<QPushButton*>(button3);

		buttonListPion[0] = dynamic_cast<QPushButton*>(button4);
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;

	}
	else if (k == mieszane) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button3);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button4);
		buttonListPoziom[2] = nullptr;

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = nullptr;

	}
	else if (k == mieszanePoziom) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button2);
		buttonListPoziom[1] = dynamic_cast<QPushButton*>(button3);
		buttonListPoziom[2] = dynamic_cast<QPushButton*>(button4);

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = nullptr;
		buttonListPion[2] = nullptr;
	}
	else if (k == mieszanePion) {

		buttonListPoziom[0] = dynamic_cast<QPushButton*>(button4);
		buttonListPoziom[1] = nullptr;
		buttonListPoziom[2] = nullptr;

		buttonListPion[0] = dynamic_cast<QPushButton*>(button1);
		buttonListPion[1] = dynamic_cast<QPushButton*>(button2);
		buttonListPion[2] = dynamic_cast<QPushButton*>(button3);
	}
}

void QHoverSensitiveButton::setUstawiono(bool ustawiono)
{
	this->ustawiono = ustawiono;
}

void QHoverSensitiveButton::ustawionoToList()
{
	QHoverSensitiveButton* toSet = nullptr;

	if (*czyPion == false) {
		for (int i = 0; i < *ilosc - 1; i++) {
			if (buttonListPoziom[i] != nullptr) toSet = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[i]);
			if (toSet != nullptr) toSet->setUstawiono();
		}
	}
	else {
		for (int i = 0; i < *ilosc - 1; i++) {
			if (buttonListPion[i] != nullptr) toSet = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[i]);
			if (toSet != nullptr) toSet->setUstawiono();
		}
	}
}

void QHoverSensitiveButton::setLiczbaStatkow(int liczbaStatkow)
{
	this->liczbaStatkow = liczbaStatkow;
}

void QHoverSensitiveButton::hoverEnter(QHoverEvent *)
{
	if (ustawiono == false) {
		setVisible();
	}
}

void QHoverSensitiveButton::hoverLeave(QHoverEvent *)
{
	if (ustawiono == false) {
		this->setFlat(true);
		QHoverSensitiveButton* toCheck;

		if (czyPion != nullptr) {
			if (*czyPion == false) {
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[0]);
				if (buttonListPoziom[0] != nullptr && toCheck->ustawiono == false) buttonListPoziom[0]->setFlat(true);
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[1]);
				if (buttonListPoziom[1] != nullptr && toCheck->ustawiono == false) buttonListPoziom[1]->setFlat(true);
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[2]);
				if (buttonListPoziom[2] != nullptr && toCheck->ustawiono == false) buttonListPoziom[2]->setFlat(true);
			}
			else
			{
				this->setFlat(true);
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[0]);
				if (buttonListPion[0] != nullptr && toCheck->ustawiono == false) buttonListPion[0]->setFlat(true);
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[1]);
				if (buttonListPion[1] != nullptr && toCheck->ustawiono == false) buttonListPion[1]->setFlat(true);
				toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[2]);
				if (buttonListPion[2] != nullptr && toCheck->ustawiono == false) buttonListPion[2]->setFlat(true);
			}
		}
		repaint();
	}
}

void QHoverSensitiveButton::hoverMove(QHoverEvent *)
{
	QFont font = this->font();
	font.setBold(true);
	this->setFont(font);
	repaint();
}

void QHoverSensitiveButton::setVisible() {

	QHoverSensitiveButton* toCheck;
	if (ilosc != nullptr) {
		if (*ilosc == 4) {
			if (*czyPion == false) {

				this->setFlat(false);
				if (buttonListPoziom[0] != nullptr) {

					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[0]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[0]->setFlat(false);
						buttonListPoziom[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPoziom[1] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[1]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[1]->setFlat(false);
						buttonListPoziom[1]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPoziom[2] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[2]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[2]->setFlat(false);
						buttonListPoziom[2]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
			else {

				this->setFlat(false);
				if (buttonListPion[0] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[0]);
					if (toCheck->ustawiono == false) {
						buttonListPion[0]->setFlat(false);
						buttonListPion[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPion[1] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[1]);
					if (toCheck->ustawiono == false) {
						buttonListPion[1]->setFlat(false);
						buttonListPion[1]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPion[2] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[2]);
					if (toCheck->ustawiono == false) {
						buttonListPion[2]->setFlat(false);
						buttonListPion[2]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
		}
		else if (*ilosc == 3) {

			if (*czyPion == false) {

				this->setFlat(false);
				if (buttonListPoziom[0] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[0]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[0]->setFlat(false);
						buttonListPoziom[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPoziom[1] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[1]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[1]->setFlat(false);
						buttonListPoziom[1]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
			else {

				this->setFlat(false);
				if (buttonListPion[0] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[0]);
					if (toCheck->ustawiono == false) {
						buttonListPion[0]->setFlat(false);
						buttonListPion[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}

				if (buttonListPion[1] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[1]);
					if (toCheck->ustawiono == false) {
						buttonListPion[1]->setFlat(false);
						buttonListPion[1]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
		}
		else if (*ilosc == 2) {

			if (*czyPion == false) {

				this->setFlat(false);
				if (buttonListPoziom[0] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPoziom[0]);
					if (toCheck->ustawiono == false) {
						buttonListPoziom[0]->setFlat(false);
						buttonListPoziom[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
			else {

				this->setFlat(false);
				if (buttonListPion[0] != nullptr) {
					toCheck = dynamic_cast<QHoverSensitiveButton*> (buttonListPion[0]);
					if (toCheck->ustawiono == false) {
						buttonListPion[0]->setFlat(false);
						buttonListPion[0]->setStyleSheet("background-color: brown");
					}
				}
				else {
					//sygnal bledu
				}
			}
		}
		else {

			this->setFlat(false);
			this->setStyleSheet("background-color: brown");
		}
	}
	else {

		this->setFlat(false);
		this->setStyleSheet("background-color: brown");
	}
}

bool QHoverSensitiveButton::event(QEvent *event)
{
	switch (event->type())
	{
	case QEvent::HoverEnter:
		hoverEnter(static_cast<QHoverEvent*>(event));
		return true;
		break;
	case QEvent::HoverLeave:
		hoverLeave(static_cast<QHoverEvent*>(event));
		return true;
		break;
	case QEvent::HoverMove:
		hoverMove(static_cast<QHoverEvent*>(event));
		return true;
		break;
	default:
		break;
	}
	return QWidget::event(event);
}
