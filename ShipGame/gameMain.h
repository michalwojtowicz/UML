#ifndef GAMEMAIN_H
#define GAMEMAIN_H

#include "User.h"
#include <QtWidgets/QMainWindow>
#include "ui_gameView.h"
#include "qhoversensitivebutton.h"

class GameMain : public QMainWindow
{
	Q_OBJECT

public:
	GameMain(int **tab, QWidget *parent = 0);
	~GameMain();
	
	int tab[10][10];

	void drawShip();
	void init();

	QPushButton ***planszaUser = new QPushButton**[10];
	QHoverSensitiveButton ***planszaGame = new QHoverSensitiveButton**[10];

	User *user;
	
	public slots:

	
	void on_pushButton_101_clicked();
	void on_pushButton_102_clicked();
	void on_pushButton_103_clicked();
	void on_pushButton_104_clicked();
	void on_pushButton_105_clicked();
	void on_pushButton_106_clicked();
	void on_pushButton_107_clicked();
	void on_pushButton_108_clicked();
	void on_pushButton_109_clicked();
	void on_pushButton_110_clicked();
	void on_pushButton_111_clicked();
	void on_pushButton_112_clicked();
	void on_pushButton_113_clicked();
	void on_pushButton_114_clicked();
	void on_pushButton_115_clicked();
	void on_pushButton_116_clicked();
	void on_pushButton_117_clicked();
	void on_pushButton_118_clicked();
	void on_pushButton_119_clicked();
	void on_pushButton_120_clicked();
	void on_pushButton_121_clicked();
	void on_pushButton_122_clicked();
	void on_pushButton_123_clicked();
	void on_pushButton_124_clicked();
	void on_pushButton_125_clicked();
	void on_pushButton_126_clicked();
	void on_pushButton_127_clicked();
	void on_pushButton_128_clicked();
	void on_pushButton_129_clicked();
	void on_pushButton_130_clicked();
	void on_pushButton_131_clicked();
	void on_pushButton_132_clicked();
	void on_pushButton_133_clicked();
	void on_pushButton_134_clicked();
	void on_pushButton_135_clicked();
	void on_pushButton_136_clicked();
	void on_pushButton_137_clicked();
	void on_pushButton_138_clicked();
	void on_pushButton_139_clicked();
	void on_pushButton_140_clicked();
	void on_pushButton_141_clicked();
	void on_pushButton_142_clicked();
	void on_pushButton_143_clicked();
	void on_pushButton_144_clicked();
	void on_pushButton_145_clicked();
	void on_pushButton_146_clicked();
	void on_pushButton_147_clicked();
	void on_pushButton_148_clicked();
	void on_pushButton_149_clicked();
	void on_pushButton_150_clicked();
	void on_pushButton_151_clicked();
	void on_pushButton_152_clicked();
	void on_pushButton_153_clicked();
	void on_pushButton_154_clicked();
	void on_pushButton_155_clicked();
	void on_pushButton_156_clicked();
	void on_pushButton_157_clicked();
	void on_pushButton_158_clicked();
	void on_pushButton_159_clicked();
	void on_pushButton_160_clicked();
	void on_pushButton_161_clicked();
	void on_pushButton_162_clicked();
	void on_pushButton_163_clicked();
	void on_pushButton_164_clicked();
	void on_pushButton_165_clicked();
	void on_pushButton_166_clicked();
	void on_pushButton_167_clicked();
	void on_pushButton_168_clicked();
	void on_pushButton_169_clicked();
	void on_pushButton_170_clicked();
	void on_pushButton_171_clicked();
	void on_pushButton_172_clicked();
	void on_pushButton_173_clicked();
	void on_pushButton_174_clicked();
	void on_pushButton_175_clicked();
	void on_pushButton_176_clicked();
	void on_pushButton_177_clicked();
	void on_pushButton_178_clicked();
	void on_pushButton_179_clicked();
	void on_pushButton_180_clicked();
	void on_pushButton_181_clicked();
	void on_pushButton_182_clicked();
	void on_pushButton_183_clicked();
	void on_pushButton_184_clicked();
	void on_pushButton_185_clicked();
	void on_pushButton_186_clicked();
	void on_pushButton_187_clicked();
	void on_pushButton_188_clicked();
	void on_pushButton_189_clicked();
	void on_pushButton_190_clicked();
	void on_pushButton_191_clicked();
	void on_pushButton_192_clicked();
	void on_pushButton_193_clicked();
	void on_pushButton_194_clicked();
	void on_pushButton_195_clicked();
	void on_pushButton_196_clicked();
	void on_pushButton_197_clicked();
	void on_pushButton_198_clicked();
	void on_pushButton_199_clicked();
	void on_pushButton_200_clicked();

	public slots:
		void wait();
		void change(int x, int y);
		void noChange(int x, int y);

private:
	Ui::MainWindow ui;
};

#endif // GAMEMAIN_H
