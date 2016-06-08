#include "shipgame.h"
#include <memory>

ShipGame::ShipGame(QWidget *parent)
	: QMainWindow(parent)
{  
	
	ui.setupUi(this);

	init();
}

void ShipGame::init() {

	*ilosc_button = {};

	for (int i = 0; i < 10; i++) {

		plansza[i] = new int[10];
	}

	for (int k = 0; k < 10; k++) {
		for (int j = 0; j < 10; j++) {

			plansza[k][j] = 0;
		}
	}
	
	for (int m = 0; m < 10; m++) {

		planszaUser[m] = new QHoverSensitiveButton*[10];
		for (int n = 0; n < 10; n++) {

			planszaUser[m][n] = new QHoverSensitiveButton[10];
		}
	}

	planszaUser[0][0] = ui.pushButton_2;
	planszaUser[0][1] = ui.pushButton_24;
	planszaUser[0][2] = ui.pushButton_25;
	planszaUser[0][3] = ui.pushButton_26;
	planszaUser[0][4] = ui.pushButton_27;
	planszaUser[0][5] = ui.pushButton_28;
	planszaUser[0][6] = ui.pushButton_29;
	planszaUser[0][7] = ui.pushButton_30;
	planszaUser[0][8] = ui.pushButton_31;
	planszaUser[0][9] = ui.pushButton_32;
	planszaUser[1][0] = ui.pushButton_33;
	planszaUser[1][1] = ui.pushButton_34;
	planszaUser[1][2] = ui.pushButton_35;
	planszaUser[1][3] = ui.pushButton_36;
	planszaUser[1][4] = ui.pushButton_37;
	planszaUser[1][5] = ui.pushButton_38;
	planszaUser[1][6] = ui.pushButton_39;
	planszaUser[1][7] = ui.pushButton_40;
	planszaUser[1][8] = ui.pushButton_41;
	planszaUser[1][9] = ui.pushButton_42;
	planszaUser[2][0] = ui.pushButton_43;
	planszaUser[2][1] = ui.pushButton_44;
	planszaUser[2][2] = ui.pushButton_45;
	planszaUser[2][3] = ui.pushButton_46;
	planszaUser[2][4] = ui.pushButton_47;
	planszaUser[2][5] = ui.pushButton_48;
	planszaUser[2][6] = ui.pushButton_49;
	planszaUser[2][7] = ui.pushButton_50;
	planszaUser[2][8] = ui.pushButton_51;
	planszaUser[2][9] = ui.pushButton_52;
	planszaUser[3][0] = ui.pushButton_53;
	planszaUser[3][1] = ui.pushButton_54;
	planszaUser[3][2] = ui.pushButton_55;
	planszaUser[3][3] = ui.pushButton_56;
	planszaUser[3][4] = ui.pushButton_57;
	planszaUser[3][5] = ui.pushButton_58;
	planszaUser[3][6] = ui.pushButton_59;
	planszaUser[3][7] = ui.pushButton_60;
	planszaUser[3][8] = ui.pushButton_61;
	planszaUser[3][9] = ui.pushButton_62;
	planszaUser[4][0] = ui.pushButton_63;
	planszaUser[4][1] = ui.pushButton_64;
	planszaUser[4][2] = ui.pushButton_65;
	planszaUser[4][3] = ui.pushButton_66;
	planszaUser[4][4] = ui.pushButton_67;
	planszaUser[4][5] = ui.pushButton_68;
	planszaUser[4][6] = ui.pushButton_69;
	planszaUser[4][7] = ui.pushButton_70;
	planszaUser[4][8] = ui.pushButton_71;
	planszaUser[4][9] = ui.pushButton_72;
	planszaUser[5][0] = ui.pushButton_73;
	planszaUser[5][1] = ui.pushButton_74;
	planszaUser[5][2] = ui.pushButton_75;
	planszaUser[5][3] = ui.pushButton_76;
	planszaUser[5][4] = ui.pushButton_77;
	planszaUser[5][5] = ui.pushButton_78;
	planszaUser[5][6] = ui.pushButton_79;
	planszaUser[5][7] = ui.pushButton_80;
	planszaUser[5][8] = ui.pushButton_81;
	planszaUser[5][9] = ui.pushButton_82;
	planszaUser[6][0] = ui.pushButton_83;
	planszaUser[6][1] = ui.pushButton_84;
	planszaUser[6][2] = ui.pushButton_85;
	planszaUser[6][3] = ui.pushButton_86;
	planszaUser[6][4] = ui.pushButton_87;
	planszaUser[6][5] = ui.pushButton_88;
	planszaUser[6][6] = ui.pushButton_89;
	planszaUser[6][7] = ui.pushButton_90;
	planszaUser[6][8] = ui.pushButton_91;
	planszaUser[6][9] = ui.pushButton_92;
	planszaUser[7][0] = ui.pushButton_93;
	planszaUser[7][1] = ui.pushButton_94;
	planszaUser[7][2] = ui.pushButton_95;
	planszaUser[7][3] = ui.pushButton_96;
	planszaUser[7][4] = ui.pushButton_97;
	planszaUser[7][5] = ui.pushButton_98;
	planszaUser[7][6] = ui.pushButton_99;
	planszaUser[7][7] = ui.pushButton_100;
	planszaUser[7][8] = ui.pushButton_101;
	planszaUser[7][9] = ui.pushButton_102;
	planszaUser[8][0] = ui.pushButton_103;
	planszaUser[8][1] = ui.pushButton_104;
	planszaUser[8][2] = ui.pushButton_105;
	planszaUser[8][3] = ui.pushButton_106;
	planszaUser[8][4] = ui.pushButton_107;
	planszaUser[8][5] = ui.pushButton_108;
	planszaUser[8][6] = ui.pushButton_109;
	planszaUser[8][7] = ui.pushButton_110;
	planszaUser[8][8] = ui.pushButton_111;
	planszaUser[8][9] = ui.pushButton_112;
	planszaUser[9][0] = ui.pushButton_113;
	planszaUser[9][1] = ui.pushButton_114;
	planszaUser[9][2] = ui.pushButton_115;
	planszaUser[9][3] = ui.pushButton_116;
	planszaUser[9][4] = ui.pushButton_117;
	planszaUser[9][5] = ui.pushButton_118;
	planszaUser[9][6] = ui.pushButton_119;
	planszaUser[9][7] = ui.pushButton_120;
	planszaUser[9][8] = ui.pushButton_121;
	planszaUser[9][9] = ui.pushButton_122;

	/*for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			std::cout << plansza[o][l];
		}
		std::cout << std::endl;
	}*/
}

void ShipGame::on_pushButton_12_clicked() {

	if (*ui.czyPion == false) {

		*ui.czyPion = true;
	}
	else {

		*ui.czyPion = false;
	}
}

void ShipGame::mouseMoveEvent(QMouseEvent *e)
{
	std::cout << "event" << std::endl;
	if (e->buttons() == Qt::RightButton) {
		if (*ui.czyPion == false) {

			*ui.czyPion = true;
		} else {

			*ui.czyPion = false;
		}
	}
}

void ShipGame::refreshCount(int i) {

	if (i == 4){

		QString text = ui.label->text();
		int count = std::stof(text.toStdString().substr(0));
		std::cout << count;

		if (count == 1) {

			ui.label->setText("0x");
		}
		else if (count == 0) {
			*ui.ilosc = 0;
		}
	}
	else if (i == 3) {
		QString text = ui.label_2->text();
		int count = std::stof(text.toStdString().substr(0));
		std::cout << count;

		if (count == 2) {

			ui.label_2->setText("1x");
		}else if (count == 1) {

			ui.label_2->setText("0x");
		}
		else if (count == 0) {
			*ui.ilosc = 0;
		}
	}
	else if (i == 2) {
		QString text = ui.label_3->text();
		int count = std::stof(text.toStdString().substr(0));
		std::cout << count;

		if (count == 3){

			ui.label_3->setText("2x");
		}else if (count == 2) {

			ui.label_3->setText("1x");
		}else if (count == 1) {

			ui.label_3->setText("0x");
		}
		else if (count == 0) {
			*ui.ilosc = 0;
		}
	}
	else if (i == 1) {
		QString text = ui.label_4->text();
		int count = std::stof(text.toStdString().substr(0));
		std::cout << count;

		if (count == 4) {

			ui.label_4->setText("3x");
		}
		else if (count == 3) {

			ui.label_4->setText("2x");
		}
		else if (count == 2) {

			ui.label_4->setText("1x");
		}
		else if (count == 1) {

			ui.label_4->setText("0x");
		}
		else if (count == 0) {
			*ui.ilosc = 0;
		}
	}
}

void ShipGame::click_check() {

	for (int i = 0; i < 4; i++) {

		if (ilosc_button[i] == 1) {
			if (i == 0) {

				ui.pushButton->setStyleSheet("");
				ui.pushButton_11->setStyleSheet("");
				ui.pushButton_4->setStyleSheet("");
				ui.pushButton_3->setStyleSheet("");
				ilosc_button[0] = 0;
			}
			if (i == 1) {

				ui.pushButton_5->setStyleSheet("");
				ui.pushButton_6->setStyleSheet("");
				ui.pushButton_7->setStyleSheet("");
				ilosc_button[1] = 0;
			}
			if (i == 2) {

				ui.pushButton_8->setStyleSheet("");
				ui.pushButton_9->setStyleSheet("");
				ilosc_button[2] = 0;
			}
			if (i == 3) {

				ui.pushButton_10->setStyleSheet("");
				ilosc_button[3] = 0;
			}
		}
	}
}

void ShipGame::on_pushButton_clicked() {

	if (ilosc_button[0] != 1) {

		click_check();

		ui.pushButton->setStyleSheet("background-color: blue");
		ui.pushButton_11->setStyleSheet("background-color: blue");
		ui.pushButton_4->setStyleSheet("background-color: blue");
		ui.pushButton_3->setStyleSheet("background-color: blue");
		*ui.ilosc = 4;
		ilosc_button[0] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_11_clicked() {


	if (ilosc_button[0] != 1) {

		click_check();

		ui.pushButton->setStyleSheet("background-color: blue");
		ui.pushButton_11->setStyleSheet("background-color: blue");
		ui.pushButton_4->setStyleSheet("background-color: blue");
		ui.pushButton_3->setStyleSheet("background-color: blue");
		*ui.ilosc = 4;
		ilosc_button[0] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_3_clicked() {

	if (ilosc_button[0] != 1) {

		click_check();

		ui.pushButton->setStyleSheet("background-color: blue");
		ui.pushButton_11->setStyleSheet("background-color: blue");
		ui.pushButton_4->setStyleSheet("background-color: blue");
		ui.pushButton_3->setStyleSheet("background-color: blue");
		*ui.ilosc = 4;
		ilosc_button[0] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_4_clicked() {

	if (ilosc_button[0] != 1) {

		click_check();

		ui.pushButton->setStyleSheet("background-color: blue");
		ui.pushButton_11->setStyleSheet("background-color: blue");
		ui.pushButton_4->setStyleSheet("background-color: blue");
		ui.pushButton_3->setStyleSheet("background-color: blue");
		*ui.ilosc = 4;
		ilosc_button[0] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_5_clicked() {

	if (ilosc_button[1] != 1) {

		click_check();

		ui.pushButton_5->setStyleSheet("background-color: blue");
		ui.pushButton_6->setStyleSheet("background-color: blue");
		ui.pushButton_7->setStyleSheet("background-color: blue");
		*ui.ilosc = 3;
		ilosc_button[1] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_6_clicked() {

	if (ilosc_button[1] != 1) {

		click_check();

		ui.pushButton_5->setStyleSheet("background-color: blue");
		ui.pushButton_6->setStyleSheet("background-color: blue");
		ui.pushButton_7->setStyleSheet("background-color: blue");
		*ui.ilosc = 3;
		ilosc_button[1] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_7_clicked() {

	if (ilosc_button[1] != 1) {

		click_check();

		ui.pushButton_5->setStyleSheet("background-color: blue");
		ui.pushButton_6->setStyleSheet("background-color: blue");
		ui.pushButton_7->setStyleSheet("background-color: blue");
		*ui.ilosc = 3;
		ilosc_button[1] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_8_clicked()
{

	if (ilosc_button[2] != 1) {

		click_check();

		ui.pushButton_8->setStyleSheet("background-color: blue");
		ui.pushButton_9->setStyleSheet("background-color: blue");
		*ui.ilosc = 2;
		ilosc_button[2] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_9_clicked()
{

	if (ilosc_button[2] != 1) {

		click_check();

		ui.pushButton_8->setStyleSheet("background-color: blue");
		ui.pushButton_9->setStyleSheet("background-color: blue");
		*ui.ilosc = 2;
		ilosc_button[2] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::on_pushButton_10_clicked()
{

	if (ilosc_button[3] != 1) {

		click_check();

		ui.pushButton_10->setStyleSheet("background-color: blue");
		*ui.ilosc = 1;
		ilosc_button[3] = 1;
	}
	else {

		click_check();
		*ui.ilosc = 0;
	};
}

void ShipGame::clickEvent(int x, int y) {

	if (*ui.ilosc == 0) {
		return;
	}

	planszaUser[x][y]->setUstawiono();
	planszaUser[x][y]->ustawionoToList();

	planszaUser[x][y]->setStyleSheet("background-color: brown");

	if (*ui.czyPion == false) {
		
		addHorizontal(x, y);

		for (int i = 0; i < *ui.ilosc-1; i++) {

			if (planszaUser[x][y]->buttonListPoziom[i] != nullptr) planszaUser[x][y]->buttonListPoziom[i]->setStyleSheet("background-color: brown");
		}

		if (*ui.ilosc == 4){

			if (y + 4 <= 9) planszaUser[x][y + 4]->setFlat(false);
			if (y != 0) planszaUser[x][y - 1]->setFlat(false);
			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setFlat(false);
			if (y + 4 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 4]->setFlat(false);
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 3]->setFlat(false);
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setFlat(false);

			if (y + 4 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 4]->setFlat(false);
			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setFlat(false);
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setFlat(false);
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setFlat(false);
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);

			if (y + 4 <= 9) planszaUser[x][y + 4]->setStyleSheet("background-color: blue");
			if (y != 0) planszaUser[x][y - 1]->setStyleSheet("background-color: blue");

			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (y + 4 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 4]->setStyleSheet("background-color: blue");
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 3]->setStyleSheet("background-color: blue");
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setStyleSheet("background-color: blue");
	
			if (y + 4 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 4]->setStyleSheet("background-color: blue");
			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setStyleSheet("background-color: blue");
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x -1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y-1]->setStyleSheet("background-color: blue");

			if (y+4 <= 9) planszaUser[x][y + 4]->setUstawiono();
			if (y != 0) planszaUser[x][y - 1]->setUstawiono();
			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (y + 4 <= 9 && x + 1 <= 9) planszaUser[x+1][y + 4]->setUstawiono();
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x+1][y + 3]->setUstawiono();
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x+1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x+1][y + 1]->setUstawiono();
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setUstawiono();

			if (y + 4 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 4]->setUstawiono();
			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setUstawiono();
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setUstawiono();
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setUstawiono();
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();

		} else if (*ui.ilosc == 3){

			if (y + 3 <= 9)planszaUser[x][y + 3]->setFlat(false);
			if (y != 0) planszaUser[x][y - 1]->setFlat(false);
			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setFlat(false);
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 3]->setFlat(false);
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setFlat(false);

			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setFlat(false);
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setFlat(false);
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setFlat(false);
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);

			if (y + 3 <= 9)planszaUser[x][y + 3]->setStyleSheet("background-color: blue");
			if (y != 0) planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 3]->setStyleSheet("background-color: blue");
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setStyleSheet("background-color: blue");

			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setStyleSheet("background-color: blue");
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
			
			if (y + 3 <= 9)planszaUser[x][y + 3]->setUstawiono();
			if (y != 0) planszaUser[x][y - 1]->setUstawiono();
			if (y != 0 && y < 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (y + 3 <= 9 && x + 1 <= 9) planszaUser[x + 1][y + 3]->setUstawiono();
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setUstawiono();

			if (y + 3 <= 9 && x - 1 >= 0) planszaUser[x - 1][y + 3]->setUstawiono();
			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setUstawiono();
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setUstawiono();
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();

		}
		else if (*ui.ilosc == 2) {

			if (y + 2 <= 9)planszaUser[x][y + 2]->setFlat(false);
			if (y != 0) planszaUser[x][y - 1]->setFlat(false);
			if (y != 0) planszaUser[x + 1][y - 1]->setFlat(false);
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setFlat(false);

			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setFlat(false);
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setFlat(false);
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setFlat(false);
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);

			if (y + 2 <= 9)planszaUser[x][y + 2]->setStyleSheet("background-color: blue");
			if (y != 0) planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (y != 0) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setStyleSheet("background-color: blue");

			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
		
			if (y + 2 <= 9)planszaUser[x][y + 2]->setUstawiono();
			if (y != 0) planszaUser[x][y - 1]->setUstawiono();
			if (y != 0) planszaUser[x + 1][y - 1]->setUstawiono();
			if (y + 2 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setUstawiono();

			if (y + 2 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 2]->setUstawiono();
			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setUstawiono();
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setUstawiono();
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();
		} else if (*ui.ilosc == 1){

			if (y + 1 <= 9)planszaUser[x][y + 1]->setFlat(false);
			if (y != 0) planszaUser[x][y - 1]->setFlat(false);
			if (y != 0 && y <= 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setFlat(false);
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setFlat(false);

			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setFlat(false);
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setFlat(false);
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);

			if (y + 1 <= 9)planszaUser[x][y + 1]->setStyleSheet("background-color: blue");
			if (y != 0) planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (y >= 0 && y <= 9 && x + 1 <= 9)planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setStyleSheet("background-color: blue");

			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
			
			if (y + 1 <= 9)planszaUser[x][y + 1]->setUstawiono();
			if (y != 0) planszaUser[x][y - 1]->setUstawiono();
			if (y != 0 && y <= 9 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (y + 1 <= 9 && x + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y <= 9 && x + 1 <= 9)planszaUser[x + 1][y]->setUstawiono();

			if (y + 1 <= 9 && x - 1 >= 0)planszaUser[x - 1][y + 1]->setUstawiono();
			if (y <= 9 && x - 1 >= 0)planszaUser[x - 1][y]->setUstawiono();
			if (y > 0 && x - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();
		} 
	}
	else {
		
		addVertical(x, y);

		for (int i = 0; i < *ui.ilosc - 1; i++) {

			if(planszaUser[x][y]->buttonListPion[i] != nullptr) planszaUser[x][y]->buttonListPion[i]->setStyleSheet("background-color: brown");
		}

		if (*ui.ilosc == 4) {

			if (x + 4 <= 9)planszaUser[x+4][y]->setUstawiono();
			if (x-1 != 0) planszaUser[x-1][y]->setUstawiono();
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 4 <= 9 && y + 1 <= 9)planszaUser[x + 4][y + 1]->setUstawiono();
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setUstawiono();
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setUstawiono();
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y + 1 <= 9)planszaUser[x][y+1]->setUstawiono();

			if(x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setUstawiono();
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();
			if (y - 1 >= 0)planszaUser[x][y - 1]->setUstawiono();
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setUstawiono();
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setUstawiono();
			if (x + 4 <= 9 && y - 1 >= 0)planszaUser[x + 4][y - 1]->setUstawiono();

			if (x + 4 <= 9)planszaUser[x + 4][y]->setFlat(false);
			if (x - 1 != 0) planszaUser[x - 1][y]->setFlat(false);
			if (x + 4 <= 9 && y + 1 <= 9)planszaUser[x + 4][y + 1]->setFlat(false);
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setFlat(false);
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setFlat(false);
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y + 1 <= 9)planszaUser[x][y + 1]->setFlat(false);
			
			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setFlat(false);
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);
			if (y - 1 >= 0)planszaUser[x][y - 1]->setFlat(false);
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setFlat(false);
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setFlat(false);
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setFlat(false);
			if (x + 4 <= 9 && y - 1 >= 0)planszaUser[x + 4][y - 1]->setFlat(false);

			if (x + 4 <= 9)planszaUser[x + 4][y]->setStyleSheet("background-color: blue");
			if (x - 1 != 0) planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 4 <= 9 && y + 1 <= 9)planszaUser[x + 4][y + 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9)planszaUser[x][y + 1]->setStyleSheet("background-color: blue");

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0)planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setStyleSheet("background-color: blue");
			if (x + 4 <= 9 && y - 1 >= 0)planszaUser[x + 4][y - 1]->setStyleSheet("background-color: blue");
		}
		else if (*ui.ilosc == 3) {


			if (x - 1 >= 0) planszaUser[x - 1][y]->setUstawiono();
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setUstawiono();
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setUstawiono();
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y + 1 <= 9)planszaUser[x][y + 1]->setUstawiono();

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setUstawiono();
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();
			if (y - 1 >= 0)planszaUser[x][y - 1]->setUstawiono();
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setUstawiono();
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setUstawiono();
			if (x + 4 <= 9 && y - 1 >= 0)planszaUser[x + 4][y - 1]->setUstawiono();
			if (x + 3 <= 9) planszaUser[x + 3][y]->setUstawiono();

			if (x + 3 <= 9) planszaUser[x + 3][y]->setFlat(false);
			if (y - 1 != 0) planszaUser[x - 1][y]->setFlat(false);
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setFlat(false);
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setFlat(false);
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y + 1 <= 9)planszaUser[x][y + 1]->setFlat(false);

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setFlat(false);
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);
			if (y - 1 >= 0)planszaUser[x][y - 1]->setFlat(false);
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setFlat(false);
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setFlat(false);
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setFlat(false);

			if (x - 1 != 0) planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9 && y + 1 <= 9)planszaUser[x + 3][y + 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9)planszaUser[x][y + 1]->setStyleSheet("background-color: blue");

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0)planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9) planszaUser[x + 3][y]->setStyleSheet("background-color: blue");

		}
		else if (*ui.ilosc == 2) {

			if (x - 1 != 0) planszaUser[x - 1][y]->setUstawiono();
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setUstawiono();
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setUstawiono();
			if (y + 1 <= 9)planszaUser[x][y + 1]->setUstawiono();

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setUstawiono();
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setUstawiono();
			if (y - 1 >= 0)planszaUser[x][y - 1]->setUstawiono();
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setUstawiono();
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setUstawiono();
			if (x + 2 <= 9) planszaUser[x + 2][y]->setUstawiono();

			if (x + 2 <= 9) planszaUser[x + 2][y]->setFlat(false);
			if (x - 1 != 0) planszaUser[x - 1][y]->setFlat(false);
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setFlat(false);
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setFlat(false);
			if (y + 1 <= 9)planszaUser[x][y + 1]->setFlat(false);

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setFlat(false);
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setFlat(false);
			if (y - 1 >= 0)planszaUser[x][y - 1]->setFlat(false);
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setFlat(false);
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setFlat(false);

			if (x != 0) planszaUser[x - 1][y]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0 && x + 1 <= 9) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y + 1 <= 9)planszaUser[x + 2][y + 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y + 1 <= 9)planszaUser[x + 1][y + 1]->setStyleSheet("background-color: blue");
			if (y + 1 <= 9)planszaUser[x][y + 1]->setStyleSheet("background-color: blue");

			if (x - 1 != 0 && y + 1 <= 9)planszaUser[x - 1][y + 1]->setStyleSheet("background-color: blue");
			if (x - 1 >= 0 && y - 1 >= 0)planszaUser[x - 1][y - 1]->setStyleSheet("background-color: blue");
			if (y - 1 >= 0)planszaUser[x][y - 1]->setStyleSheet("background-color: blue");
			if (x + 1 <= 9 && y - 1 >= 0) planszaUser[x + 1][y - 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9 && y - 1 >= 0)planszaUser[x + 2][y - 1]->setStyleSheet("background-color: blue");
			if (x + 3 <= 9 && y - 1 >= 0)planszaUser[x + 3][y - 1]->setStyleSheet("background-color: blue");
			if (x + 2 <= 9) planszaUser[x + 2][y]->setStyleSheet("background-color: blue");
		}
		else if (*ui.ilosc == 1) {

			planszaUser[x][y + 1]->setUstawiono();
			if (x != 0) planszaUser[x - 1][y]->setUstawiono();
			if (y != 0) planszaUser[x + 1][y - 1]->setUstawiono();
			planszaUser[x + 1][y + 1]->setUstawiono();
			planszaUser[x + 1][y]->setUstawiono();
		}
	}
}

void ShipGame::addHorizontal(int x, int y) {

	for (int i = y; i < y + *ui.ilosc; i++) {
		if (i < 10) plansza[x][i] = 1;
	}

	for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			std::cout << plansza[o][l];
		}
		std::cout << std::endl;
	}
}

void ShipGame::addVertical(int x, int y) {

	for (int i = x; i < x + *ui.ilosc; i++) {
		if (i < 10) plansza[i][y] = 1;
	}

	for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			std::cout << plansza[o][l];
		}
		std::cout << std::endl;
	}
}

void ShipGame::on_pushButton_2_clicked() {
	
	refreshCount(*ui.ilosc);
	clickEvent(0, 0);
	counter--;
	if (counter == 8) {

		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}


void ShipGame::on_pushButton_24_clicked()
{
	refreshCount(*ui.ilosc);
	clickEvent(0, 1);
	counter--;
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_25_clicked()
{
	clickEvent(0, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_26_clicked()
{
	clickEvent(0, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_27_clicked()
{
	clickEvent(0, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_28_clicked()
{
	clickEvent(0, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_29_clicked()
{
	clickEvent(0, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_30_clicked()
{
	clickEvent(0, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_31_clicked()
{
	clickEvent(0, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_32_clicked()
{
	clickEvent(0, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_33_clicked()
{
	clickEvent(1, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_34_clicked()
{
	clickEvent(1, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_35_clicked()
{
	clickEvent(1, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_36_clicked()
{
	clickEvent(1, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_37_clicked()
{
	clickEvent(1,4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_38_clicked()
{
	clickEvent(1, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_39_clicked()
{
	clickEvent(1, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_40_clicked()
{
	clickEvent(1, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_41_clicked()
{
	clickEvent(1, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_42_clicked()
{
	clickEvent(1, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_43_clicked()
{
	clickEvent(2, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_44_clicked()
{
	clickEvent(2,1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_45_clicked()
{
	clickEvent(2, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_46_clicked()
{
	clickEvent(2, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_47_clicked()
{
	clickEvent(2, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_48_clicked()
{
	clickEvent(2,5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_49_clicked()
{
	clickEvent(2, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_50_clicked()
{
	clickEvent(2, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_51_clicked()
{
	clickEvent(2, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_52_clicked()
{
	clickEvent(2, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_53_clicked()
{
	clickEvent(3, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_54_clicked()
{
	clickEvent(3, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_55_clicked()
{
	clickEvent(3, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_56_clicked()
{
	clickEvent(3, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_57_clicked()
{
	clickEvent(3, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_58_clicked()
{
	clickEvent(3, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_59_clicked()
{
	clickEvent(3, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_60_clicked()
{
	clickEvent(3, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_61_clicked()
{
	clickEvent(3, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_62_clicked()
{
	clickEvent(3, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_63_clicked()
{
	clickEvent(4, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_64_clicked()
{
	clickEvent(4, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_65_clicked()
{
	clickEvent(4, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_66_clicked()
{
	clickEvent(4, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_67_clicked()
{
	clickEvent(4, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_68_clicked()
{
	clickEvent(4, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_69_clicked()
{
	clickEvent(4, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_70_clicked()
{
	clickEvent(4, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_71_clicked()
{
	clickEvent(4, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_72_clicked()
{
	clickEvent(4, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_73_clicked()
{
	clickEvent(5, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_74_clicked()
{
	clickEvent(5, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_75_clicked()
{
	clickEvent(5, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_76_clicked()
{
	clickEvent(5, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_77_clicked()
{
	clickEvent(5, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_78_clicked()
{
	clickEvent(5, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_79_clicked()
{
	clickEvent(5, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_80_clicked()
{
	clickEvent(5, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_81_clicked()
{
	clickEvent(5, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_82_clicked()
{
	clickEvent(5, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_83_clicked()
{
	clickEvent(6, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_84_clicked()
{
	clickEvent(6, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_85_clicked()
{
	clickEvent(6, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_86_clicked()
{
	clickEvent(6, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_87_clicked()
{
	clickEvent(6, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_88_clicked()
{
	clickEvent(6, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_89_clicked()
{
	clickEvent(6, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_90_clicked()
{
	clickEvent(6, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_91_clicked()
{
	clickEvent(6, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_92_clicked()
{
	clickEvent(6, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_93_clicked()
{
	clickEvent(7, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_94_clicked()
{
	clickEvent(7, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_95_clicked()
{
	clickEvent(7, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_96_clicked()
{
	clickEvent(7, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_97_clicked()
{
	clickEvent(7, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_98_clicked()
{
	clickEvent(7, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_99_clicked() {
	
	clickEvent(7, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_100_clicked()
{
	clickEvent(7, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_101_clicked()
{
	clickEvent(7, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_102_clicked()
{
	clickEvent(7, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_103_clicked()
{
	clickEvent(8, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_104_clicked()
{
	clickEvent(8, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_105_clicked()
{
	clickEvent(8, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_106_clicked()
{
	clickEvent(8, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_107_clicked()
{
	clickEvent(8, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_108_clicked()
{
	clickEvent(8, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_109_clicked()
{
	clickEvent(8, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_110_clicked()
{
	clickEvent(8, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_111_clicked()
{
	clickEvent(8, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_112_clicked()
{
	clickEvent(8, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_113_clicked()
{
	clickEvent(9, 0);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_114_clicked()
{
	clickEvent(9, 1);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_115_clicked()
{
	clickEvent(9, 2);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_116_clicked()
{
	clickEvent(9, 3);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_117_clicked()
{
	clickEvent(9, 4);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_118_clicked()
{
	clickEvent(9, 5);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_119_clicked()
{
	clickEvent(9, 6);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_120_clicked()
{
	clickEvent(9, 7);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_121_clicked()
{
	clickEvent(9, 8);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

void ShipGame::on_pushButton_122_clicked()
{
	clickEvent(9, 9);
	counter--;
	refreshCount(*ui.ilosc);
	if (counter == 0) {

		ui.label_5->setText("CZEKAJ NA PRZECIWNIKA");
		GameMain *game = new GameMain(this->plansza);
		game->show();
		this->destroy();
	}
}

ShipGame::~ShipGame()
{

}
