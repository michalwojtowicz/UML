
#include "gameMain.h"
#include "shipgame.h"
#include <iostream>
#include <string.h>
#include "Update.h"

SOCKET initSocket() {
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;

	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	printf("Initialised.\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
	}

	printf("Socket created.\n");


	inet_pton(AF_INET, "188.213.174.117", &(server.sin_addr));
	server.sin_family = AF_INET;
	server.sin_port = htons(9999);

	//Connect to remote server
	if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("Connected");

	return s;
}


void GameMain::init() {

	for (int m = 0; m < 10; m++) {

		planszaUser[m] = new QPushButton*[10];
		for (int n = 0; n < 10; n++) {

			planszaUser[m][n] = new QPushButton[10];
		}
	}

	planszaUser[0][0] = ui.pushButton;
	planszaUser[0][1] = ui.pushButton_2;
	planszaUser[0][2] = ui.pushButton_3;
	planszaUser[0][3] = ui.pushButton_4;
	planszaUser[0][4] = ui.pushButton_5;
	planszaUser[0][5] = ui.pushButton_6;
	planszaUser[0][6] = ui.pushButton_7;
	planszaUser[0][7] = ui.pushButton_8;
	planszaUser[0][8] = ui.pushButton_9;
	planszaUser[0][9] = ui.pushButton_10;
	planszaUser[1][0] = ui.pushButton_11;
	planszaUser[1][1] = ui.pushButton_12;
	planszaUser[1][2] = ui.pushButton_13;
	planszaUser[1][3] = ui.pushButton_14;
	planszaUser[1][4] = ui.pushButton_15;
	planszaUser[1][5] = ui.pushButton_16;
	planszaUser[1][6] = ui.pushButton_17;
	planszaUser[1][7] = ui.pushButton_18;
	planszaUser[1][8] = ui.pushButton_19;
	planszaUser[1][9] = ui.pushButton_20;
	planszaUser[2][0] = ui.pushButton_21;
	planszaUser[2][1] = ui.pushButton_22;
	planszaUser[2][2] = ui.pushButton_23;
	planszaUser[2][3] = ui.pushButton_24;
	planszaUser[2][4] = ui.pushButton_25;
	planszaUser[2][5] = ui.pushButton_26;
	planszaUser[2][6] = ui.pushButton_27;
	planszaUser[2][7] = ui.pushButton_28;
	planszaUser[2][8] = ui.pushButton_29;
	planszaUser[2][9] = ui.pushButton_30;
	planszaUser[3][0] = ui.pushButton_31;
	planszaUser[3][1] = ui.pushButton_32;
	planszaUser[3][2] = ui.pushButton_33;
	planszaUser[3][3] = ui.pushButton_34;
	planszaUser[3][4] = ui.pushButton_35;
	planszaUser[3][5] = ui.pushButton_36;
	planszaUser[3][6] = ui.pushButton_37;
	planszaUser[3][7] = ui.pushButton_38;
	planszaUser[3][8] = ui.pushButton_39;
	planszaUser[3][9] = ui.pushButton_40;
	planszaUser[4][0] = ui.pushButton_41;
	planszaUser[4][1] = ui.pushButton_42;
	planszaUser[4][2] = ui.pushButton_43;
	planszaUser[4][3] = ui.pushButton_44;
	planszaUser[4][4] = ui.pushButton_45;
	planszaUser[4][5] = ui.pushButton_46;
	planszaUser[4][6] = ui.pushButton_47;
	planszaUser[4][7] = ui.pushButton_48;
	planszaUser[4][8] = ui.pushButton_49;
	planszaUser[4][9] = ui.pushButton_50;
	planszaUser[5][0] = ui.pushButton_51;
	planszaUser[5][1] = ui.pushButton_52;
	planszaUser[5][2] = ui.pushButton_53;
	planszaUser[5][3] = ui.pushButton_54;
	planszaUser[5][4] = ui.pushButton_55;
	planszaUser[5][5] = ui.pushButton_56;
	planszaUser[5][6] = ui.pushButton_57;
	planszaUser[5][7] = ui.pushButton_58;
	planszaUser[5][8] = ui.pushButton_59;
	planszaUser[5][9] = ui.pushButton_60;
	planszaUser[6][0] = ui.pushButton_61;
	planszaUser[6][1] = ui.pushButton_62;
	planszaUser[6][2] = ui.pushButton_63;
	planszaUser[6][3] = ui.pushButton_64;
	planszaUser[6][4] = ui.pushButton_65;
	planszaUser[6][5] = ui.pushButton_66;
	planszaUser[6][6] = ui.pushButton_67;
	planszaUser[6][7] = ui.pushButton_68;
	planszaUser[6][8] = ui.pushButton_69;
	planszaUser[6][9] = ui.pushButton_70;
	planszaUser[7][0] = ui.pushButton_71;
	planszaUser[7][1] = ui.pushButton_72;
	planszaUser[7][2] = ui.pushButton_73;
	planszaUser[7][3] = ui.pushButton_74;
	planszaUser[7][4] = ui.pushButton_75;
	planszaUser[7][5] = ui.pushButton_76;
	planszaUser[7][6] = ui.pushButton_77;
	planszaUser[7][7] = ui.pushButton_78;
	planszaUser[7][8] = ui.pushButton_79;
	planszaUser[7][9] = ui.pushButton_80;
	planszaUser[8][0] = ui.pushButton_81;
	planszaUser[8][1] = ui.pushButton_82;
	planszaUser[8][2] = ui.pushButton_83;
	planszaUser[8][3] = ui.pushButton_84;
	planszaUser[8][4] = ui.pushButton_85;
	planszaUser[8][5] = ui.pushButton_86;
	planszaUser[8][6] = ui.pushButton_87;
	planszaUser[8][7] = ui.pushButton_88;
	planszaUser[8][8] = ui.pushButton_89;
	planszaUser[8][9] = ui.pushButton_90;
	planszaUser[9][0] = ui.pushButton_91;
	planszaUser[9][1] = ui.pushButton_92;
	planszaUser[9][2] = ui.pushButton_93;
	planszaUser[9][3] = ui.pushButton_94;
	planszaUser[9][4] = ui.pushButton_95;
	planszaUser[9][5] = ui.pushButton_96;
	planszaUser[9][6] = ui.pushButton_97;
	planszaUser[9][7] = ui.pushButton_98;
	planszaUser[9][8] = ui.pushButton_99;
	planszaUser[9][9] = ui.pushButton_100;

	for (int i = 0; i < 10; i++) {

		planszaGame[i] = new QHoverSensitiveButton*[10];
		for (int j = 0; j < 10; j++) {

			planszaGame[i][j] = new QHoverSensitiveButton[10];
		}
	}

	planszaGame[0][0] = ui.pushButton_101;
	planszaGame[0][1] = ui.pushButton_102;
	planszaGame[0][2] = ui.pushButton_103;
	planszaGame[0][3] = ui.pushButton_104;
	planszaGame[0][4] = ui.pushButton_105;
	planszaGame[0][5] = ui.pushButton_106;
	planszaGame[0][6] = ui.pushButton_107;
	planszaGame[0][7] = ui.pushButton_108;
	planszaGame[0][8] = ui.pushButton_109;
	planszaGame[0][9] = ui.pushButton_110;
	planszaGame[1][0] = ui.pushButton_111;
	planszaGame[1][1] = ui.pushButton_112;
	planszaGame[1][2] = ui.pushButton_113;
	planszaGame[1][3] = ui.pushButton_114;
	planszaGame[1][4] = ui.pushButton_115;
	planszaGame[1][5] = ui.pushButton_116;
	planszaGame[1][6] = ui.pushButton_117;
	planszaGame[1][7] = ui.pushButton_118;
	planszaGame[1][8] = ui.pushButton_119;
	planszaGame[1][9] = ui.pushButton_120;
	planszaGame[2][0] = ui.pushButton_121;
	planszaGame[2][1] = ui.pushButton_122;
	planszaGame[2][2] = ui.pushButton_123;
	planszaGame[2][3] = ui.pushButton_124;
	planszaGame[2][4] = ui.pushButton_125;
	planszaGame[2][5] = ui.pushButton_126;
	planszaGame[2][6] = ui.pushButton_127;
	planszaGame[2][7] = ui.pushButton_128;
	planszaGame[2][8] = ui.pushButton_129;
	planszaGame[2][9] = ui.pushButton_130;
	planszaGame[3][0] = ui.pushButton_131;
	planszaGame[3][1] = ui.pushButton_132;
	planszaGame[3][2] = ui.pushButton_133;
	planszaGame[3][3] = ui.pushButton_134;
	planszaGame[3][4] = ui.pushButton_135;
	planszaGame[3][5] = ui.pushButton_136;
	planszaGame[3][6] = ui.pushButton_137;
	planszaGame[3][7] = ui.pushButton_138;
	planszaGame[3][8] = ui.pushButton_139;
	planszaGame[3][9] = ui.pushButton_140;
	planszaGame[4][0] = ui.pushButton_141;
	planszaGame[4][1] = ui.pushButton_142;
	planszaGame[4][2] = ui.pushButton_143;
	planszaGame[4][3] = ui.pushButton_144;
	planszaGame[4][4] = ui.pushButton_145;
	planszaGame[4][5] = ui.pushButton_146;
	planszaGame[4][6] = ui.pushButton_147;
	planszaGame[4][7] = ui.pushButton_148;
	planszaGame[4][8] = ui.pushButton_149;
	planszaGame[4][9] = ui.pushButton_150;
	planszaGame[5][0] = ui.pushButton_151;
	planszaGame[5][1] = ui.pushButton_152;
	planszaGame[5][2] = ui.pushButton_153;
	planszaGame[5][3] = ui.pushButton_154;
	planszaGame[5][4] = ui.pushButton_155;
	planszaGame[5][5] = ui.pushButton_156;
	planszaGame[5][6] = ui.pushButton_157;
	planszaGame[5][7] = ui.pushButton_158;
	planszaGame[5][8] = ui.pushButton_159;
	planszaGame[5][9] = ui.pushButton_160;
	planszaGame[6][0] = ui.pushButton_161;
	planszaGame[6][1] = ui.pushButton_162;
	planszaGame[6][2] = ui.pushButton_163;
	planszaGame[6][3] = ui.pushButton_164;
	planszaGame[6][4] = ui.pushButton_165;
	planszaGame[6][5] = ui.pushButton_166;
	planszaGame[6][6] = ui.pushButton_167;
	planszaGame[6][7] = ui.pushButton_168;
	planszaGame[6][8] = ui.pushButton_169;
	planszaGame[6][9] = ui.pushButton_170;
	planszaGame[7][0] = ui.pushButton_171;
	planszaGame[7][1] = ui.pushButton_172;
	planszaGame[7][2] = ui.pushButton_173;
	planszaGame[7][3] = ui.pushButton_174;
	planszaGame[7][4] = ui.pushButton_175;
	planszaGame[7][5] = ui.pushButton_176;
	planszaGame[7][6] = ui.pushButton_177;
	planszaGame[7][7] = ui.pushButton_178;
	planszaGame[7][8] = ui.pushButton_179;
	planszaGame[7][9] = ui.pushButton_180;
	planszaGame[8][0] = ui.pushButton_181;
	planszaGame[8][1] = ui.pushButton_182;
	planszaGame[8][2] = ui.pushButton_183;
	planszaGame[8][3] = ui.pushButton_184;
	planszaGame[8][4] = ui.pushButton_185;
	planszaGame[8][5] = ui.pushButton_186;
	planszaGame[8][6] = ui.pushButton_187;
	planszaGame[8][7] = ui.pushButton_188;
	planszaGame[8][8] = ui.pushButton_189;
	planszaGame[8][9] = ui.pushButton_190;
	planszaGame[9][0] = ui.pushButton_191;
	planszaGame[9][1] = ui.pushButton_192;
	planszaGame[9][2] = ui.pushButton_193;
	planszaGame[9][3] = ui.pushButton_194;
	planszaGame[9][4] = ui.pushButton_195;
	planszaGame[9][5] = ui.pushButton_196;
	planszaGame[9][6] = ui.pushButton_197;
	planszaGame[9][7] = ui.pushButton_198;
	planszaGame[9][8] = ui.pushButton_199;
	planszaGame[9][9] = ui.pushButton_200;
}

GameMain::GameMain(int **tab, QWidget *parent)
		:QMainWindow(parent)
{

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			this->tab[i][j] = tab[i][j];
		}
	}

	SOCKET s = initSocket();
	//u_long iMode = 1;
	//ioctlsocket(s, FIONBIO, &iMode);
	Sea *sea = new Sea();
	user = new User(sea,s);

	user->ShipCreator(this->tab);

	Update *update = new Update(user);

	connect(update, SIGNAL(waitSignal()), this, SLOT(wait()));
	connect(update, SIGNAL(changeSignal(int, int)), this, SLOT(change(int, int)));
	connect(update, SIGNAL(noChangeSignal(int, int)), this, SLOT(noChange(int, int)));
	update->start();



	/*for (int o = 0; o < 10; o++) {
		for (int l = 0; l < 10; l++) {
			std::cout << tab[o][l];
	}
	std::cout << std::endl;
	}
	while (true) {
		if (user->Check() == true) {
			break;
		}
	}*/

	ui.setupUi(this);
	init();
	drawShip();


}

void GameMain::noChange(int x, int y) {

	std::cout << x << " " << y;
	if (user->flag == false) {

		planszaUser[0][0]->setFlat(true);
		
		ui.label->setText("pudlo!");

		ui.label_5->setGeometry(QRect(110, 130, 751, 271));
		ui.label_5->setText("Tura przeciwnika");
	}
	else {

		planszaGame[0][0]->setStyleSheet("background-color: blue");
		planszaGame[0][0]->setUstawiono();

		ui.label_2->setText("pudlo!");
		ui.label_5->resize(QSize(0, 0));
		ui.label_5->clear();
	}
}

void GameMain::change(int x, int y) {
	std::cout << "change!";
	std::cout << x << " " << y;
	if (user->flag == false) {

		planszaUser[y][x]->setFlat(true);

		ui.label->setText("trafiony!");

		ui.label_5->setGeometry(QRect(110, 130, 751, 271));
		ui.label_5->setText("Tura przeciwnika");
	}
	else {

		planszaGame[y][x]->setStyleSheet("background-color: brown");
		planszaGame[y][x]->setUstawiono();

		ui.label_2->setText("trafiony!");
		ui.label_5->resize(QSize(0, 0));
		ui.label_5->clear();
	}

}

void GameMain::wait() {
	
	
	if (user->flag == true) {

	ui.label_5->resize(QSize(0, 0));
	ui.label_5->clear();
	}else {

		ui.label_5->setText("Tura przeciwnika");
	}
}

void GameMain::drawShip() {
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (this->tab[i][j] == 1) {
				
				planszaUser[i][j]->setFlat(false);
				planszaUser[i][j]->setStyleSheet("background-color: blue");
			}
		}
	}
}



GameMain::~GameMain()
{
}

void GameMain::on_pushButton_101_clicked()
{
	user->Mshot(1, 1);
}


void GameMain::on_pushButton_102_clicked()
{
	user->Mshot(2, 1);
}

void GameMain::on_pushButton_103_clicked()
{
}

void GameMain::on_pushButton_104_clicked()
{
}

void GameMain::on_pushButton_105_clicked()
{
}

void GameMain::on_pushButton_106_clicked()
{
}

void GameMain::on_pushButton_107_clicked()
{
}

void GameMain::on_pushButton_108_clicked()
{
}

void GameMain::on_pushButton_109_clicked()
{
}

void GameMain::on_pushButton_110_clicked()
{
}

void GameMain::on_pushButton_111_clicked()
{
	std::cout << "button wcisnety";
	user->Mshot(1, 2);
}

void GameMain::on_pushButton_112_clicked()
{
}

void GameMain::on_pushButton_113_clicked()
{
}

void GameMain::on_pushButton_114_clicked()
{
}

void GameMain::on_pushButton_115_clicked()
{
}

void GameMain::on_pushButton_116_clicked()
{
}

void GameMain::on_pushButton_117_clicked()
{
}

void GameMain::on_pushButton_118_clicked()
{
}

void GameMain::on_pushButton_119_clicked()
{
}

void GameMain::on_pushButton_120_clicked()
{
}

void GameMain::on_pushButton_121_clicked()
{
}

void GameMain::on_pushButton_122_clicked()
{
}

void GameMain::on_pushButton_123_clicked()
{
}

void GameMain::on_pushButton_124_clicked()
{
}

void GameMain::on_pushButton_125_clicked()
{
}

void GameMain::on_pushButton_126_clicked()
{
}

void GameMain::on_pushButton_127_clicked()
{
}

void GameMain::on_pushButton_128_clicked()
{
}

void GameMain::on_pushButton_129_clicked()
{
}

void GameMain::on_pushButton_130_clicked()
{
}

void GameMain::on_pushButton_131_clicked()
{
}

void GameMain::on_pushButton_132_clicked()
{
}

void GameMain::on_pushButton_133_clicked()
{
}

void GameMain::on_pushButton_134_clicked()
{
}

void GameMain::on_pushButton_135_clicked()
{
}

void GameMain::on_pushButton_136_clicked()
{
}

void GameMain::on_pushButton_137_clicked()
{
}

void GameMain::on_pushButton_138_clicked()
{
}

void GameMain::on_pushButton_139_clicked()
{
}

void GameMain::on_pushButton_140_clicked()
{
}

void GameMain::on_pushButton_141_clicked()
{
}

void GameMain::on_pushButton_142_clicked()
{
}

void GameMain::on_pushButton_143_clicked()
{
}

void GameMain::on_pushButton_144_clicked()
{
}

void GameMain::on_pushButton_145_clicked()
{
}

void GameMain::on_pushButton_146_clicked()
{
}

void GameMain::on_pushButton_147_clicked()
{
}

void GameMain::on_pushButton_148_clicked()
{
}

void GameMain::on_pushButton_149_clicked()
{
}

void GameMain::on_pushButton_150_clicked()
{
}

void GameMain::on_pushButton_151_clicked()
{
}

void GameMain::on_pushButton_152_clicked()
{
}

void GameMain::on_pushButton_153_clicked()
{
}

void GameMain::on_pushButton_154_clicked()
{
}

void GameMain::on_pushButton_155_clicked()
{
}

void GameMain::on_pushButton_156_clicked()
{
}

void GameMain::on_pushButton_157_clicked()
{
}

void GameMain::on_pushButton_158_clicked()
{
}

void GameMain::on_pushButton_159_clicked()
{
}

void GameMain::on_pushButton_160_clicked()
{
}

void GameMain::on_pushButton_161_clicked()
{
}

void GameMain::on_pushButton_162_clicked()
{
}

void GameMain::on_pushButton_163_clicked()
{
}

void GameMain::on_pushButton_164_clicked()
{
}

void GameMain::on_pushButton_165_clicked()
{
}

void GameMain::on_pushButton_166_clicked()
{
}

void GameMain::on_pushButton_167_clicked()
{
}

void GameMain::on_pushButton_168_clicked()
{
}

void GameMain::on_pushButton_169_clicked()
{
}

void GameMain::on_pushButton_170_clicked()
{
}

void GameMain::on_pushButton_171_clicked()
{
}

void GameMain::on_pushButton_172_clicked()
{
}

void GameMain::on_pushButton_173_clicked()
{
}

void GameMain::on_pushButton_174_clicked()
{
}

void GameMain::on_pushButton_175_clicked()
{
}

void GameMain::on_pushButton_176_clicked()
{
}

void GameMain::on_pushButton_177_clicked()
{
}

void GameMain::on_pushButton_178_clicked()
{
}

void GameMain::on_pushButton_179_clicked()
{
}

void GameMain::on_pushButton_180_clicked()
{
}

void GameMain::on_pushButton_181_clicked()
{
}

void GameMain::on_pushButton_182_clicked()
{
}

void GameMain::on_pushButton_183_clicked()
{
}

void GameMain::on_pushButton_184_clicked()
{
}

void GameMain::on_pushButton_185_clicked()
{
}

void GameMain::on_pushButton_186_clicked()
{
}

void GameMain::on_pushButton_187_clicked()
{
}

void GameMain::on_pushButton_188_clicked()
{
}

void GameMain::on_pushButton_189_clicked()
{
}

void GameMain::on_pushButton_190_clicked()
{
}

void GameMain::on_pushButton_191_clicked()
{
}

void GameMain::on_pushButton_192_clicked()
{
}

void GameMain::on_pushButton_193_clicked()
{
}

void GameMain::on_pushButton_194_clicked()
{
}

void GameMain::on_pushButton_195_clicked()
{
}

void GameMain::on_pushButton_196_clicked()
{
}

void GameMain::on_pushButton_197_clicked()
{
}

void GameMain::on_pushButton_198_clicked()
{
}

void GameMain::on_pushButton_199_clicked()
{
}

void GameMain::on_pushButton_200_clicked()
{
}
