#include "sudoku.h"
#include "ui_sudoku.h"
#include "boardCreatorDynamic.hpp"


const int sizeBoard = 9;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
	int difficultyLevel = 30;

	BoardCreator<sizeBoard, sizeBoard> boardCreator;
	boardCreator.createBoard(difficultyLevel);
	int** board = boardCreator.getBoard(); 

	ui->cell00->setAlignment(Qt::AlignCenter);
	ui->cell01->setAlignment(Qt::AlignCenter);
	ui->cell02->setAlignment(Qt::AlignCenter);
	ui->cell03->setAlignment(Qt::AlignCenter);
	ui->cell04->setAlignment(Qt::AlignCenter);
	ui->cell05->setAlignment(Qt::AlignCenter);
	ui->cell06->setAlignment(Qt::AlignCenter);
	ui->cell07->setAlignment(Qt::AlignCenter);
	ui->cell08->setAlignment(Qt::AlignCenter);

	ui->cell10->setAlignment(Qt::AlignCenter);
	ui->cell11->setAlignment(Qt::AlignCenter);
	ui->cell12->setAlignment(Qt::AlignCenter);
	ui->cell13->setAlignment(Qt::AlignCenter);
	ui->cell14->setAlignment(Qt::AlignCenter);
	ui->cell15->setAlignment(Qt::AlignCenter);
	ui->cell16->setAlignment(Qt::AlignCenter);
	ui->cell17->setAlignment(Qt::AlignCenter);
	ui->cell18->setAlignment(Qt::AlignCenter);

	ui->cell20->setAlignment(Qt::AlignCenter);
	ui->cell21->setAlignment(Qt::AlignCenter);
	ui->cell22->setAlignment(Qt::AlignCenter);
	ui->cell23->setAlignment(Qt::AlignCenter);
	ui->cell24->setAlignment(Qt::AlignCenter);
	ui->cell25->setAlignment(Qt::AlignCenter);
	ui->cell26->setAlignment(Qt::AlignCenter);
	ui->cell27->setAlignment(Qt::AlignCenter);
	ui->cell28->setAlignment(Qt::AlignCenter);
	
	ui->cell30->setAlignment(Qt::AlignCenter);
	ui->cell31->setAlignment(Qt::AlignCenter);
	ui->cell32->setAlignment(Qt::AlignCenter);
	ui->cell33->setAlignment(Qt::AlignCenter);
	ui->cell34->setAlignment(Qt::AlignCenter);
	ui->cell35->setAlignment(Qt::AlignCenter);
	ui->cell36->setAlignment(Qt::AlignCenter);
	ui->cell37->setAlignment(Qt::AlignCenter);
	ui->cell38->setAlignment(Qt::AlignCenter);

	ui->cell40->setAlignment(Qt::AlignCenter);
	ui->cell41->setAlignment(Qt::AlignCenter);
	ui->cell42->setAlignment(Qt::AlignCenter);
	ui->cell43->setAlignment(Qt::AlignCenter);
	ui->cell44->setAlignment(Qt::AlignCenter);
	ui->cell45->setAlignment(Qt::AlignCenter);
	ui->cell46->setAlignment(Qt::AlignCenter);
	ui->cell47->setAlignment(Qt::AlignCenter);
	ui->cell48->setAlignment(Qt::AlignCenter);

	ui->cell50->setAlignment(Qt::AlignCenter);
	ui->cell51->setAlignment(Qt::AlignCenter);
	ui->cell52->setAlignment(Qt::AlignCenter);
	ui->cell53->setAlignment(Qt::AlignCenter);
	ui->cell54->setAlignment(Qt::AlignCenter);
	ui->cell55->setAlignment(Qt::AlignCenter);
	ui->cell56->setAlignment(Qt::AlignCenter);
	ui->cell57->setAlignment(Qt::AlignCenter);
	ui->cell58->setAlignment(Qt::AlignCenter);

	ui->cell60->setAlignment(Qt::AlignCenter);
	ui->cell61->setAlignment(Qt::AlignCenter);
	ui->cell62->setAlignment(Qt::AlignCenter);
	ui->cell63->setAlignment(Qt::AlignCenter);
	ui->cell64->setAlignment(Qt::AlignCenter);
	ui->cell65->setAlignment(Qt::AlignCenter);
	ui->cell66->setAlignment(Qt::AlignCenter);
	ui->cell67->setAlignment(Qt::AlignCenter);
	ui->cell68->setAlignment(Qt::AlignCenter);

	ui->cell70->setAlignment(Qt::AlignCenter);
	ui->cell71->setAlignment(Qt::AlignCenter);
	ui->cell72->setAlignment(Qt::AlignCenter);
	ui->cell73->setAlignment(Qt::AlignCenter);
	ui->cell74->setAlignment(Qt::AlignCenter);
	ui->cell75->setAlignment(Qt::AlignCenter);
	ui->cell76->setAlignment(Qt::AlignCenter);
	ui->cell77->setAlignment(Qt::AlignCenter);
	ui->cell78->setAlignment(Qt::AlignCenter);

	ui->cell80->setAlignment(Qt::AlignCenter);
	ui->cell81->setAlignment(Qt::AlignCenter);
	ui->cell82->setAlignment(Qt::AlignCenter);
	ui->cell83->setAlignment(Qt::AlignCenter);
	ui->cell84->setAlignment(Qt::AlignCenter);
	ui->cell85->setAlignment(Qt::AlignCenter);
	ui->cell86->setAlignment(Qt::AlignCenter);
	ui->cell87->setAlignment(Qt::AlignCenter);
	ui->cell88->setAlignment(Qt::AlignCenter);

	ui->cell00->setText((board[0][0] > 0 ) ? (QString::number(board[0][0])) : (""));
	ui->cell01->setText((board[0][1] > 0) ? (QString::number(board[0][1])) : (""));
	ui->cell02->setText((board[0][2] > 0) ? (QString::number(board[0][2])) : (""));
	ui->cell03->setText((board[0][3] > 0) ? (QString::number(board[0][3])) : (""));
	ui->cell04->setText((board[0][4] > 0) ? (QString::number(board[0][4])) : (""));
	ui->cell05->setText((board[0][5] > 0) ? (QString::number(board[0][5])) : (""));
	ui->cell06->setText((board[0][6] > 0) ? (QString::number(board[0][6])) : (""));
	ui->cell07->setText((board[0][7] > 0) ? (QString::number(board[0][7])) : (""));
	ui->cell08->setText((board[0][8] > 0) ? (QString::number(board[0][8])) : (""));

	ui->cell10->setText((board[1][0] > 0) ? (QString::number(board[1][0])) : (""));
	ui->cell11->setText((board[1][1] > 0) ? (QString::number(board[1][1])) : (""));
	ui->cell12->setText((board[1][2] > 0) ? (QString::number(board[1][2])) : (""));
	ui->cell13->setText((board[1][3] > 0) ? (QString::number(board[1][3])) : (""));
	ui->cell14->setText((board[1][4] > 0) ? (QString::number(board[1][4])) : (""));
	ui->cell15->setText((board[1][5] > 0) ? (QString::number(board[1][5])) : (""));
	ui->cell16->setText((board[1][6] > 0) ? (QString::number(board[1][6])) : (""));
	ui->cell17->setText((board[1][7] > 0) ? (QString::number(board[1][7])) : (""));
	ui->cell18->setText((board[1][8] > 0) ? (QString::number(board[1][8])) : (""));
	
	ui->cell20->setText((board[2][0] > 0) ? (QString::number(board[2][0])) : (""));
	ui->cell21->setText((board[2][1] > 0) ? (QString::number(board[2][1])) : (""));
	ui->cell22->setText((board[2][2] > 0) ? (QString::number(board[2][2])) : (""));
	ui->cell23->setText((board[2][3] > 0) ? (QString::number(board[2][3])) : (""));
	ui->cell24->setText((board[2][4] > 0) ? (QString::number(board[2][4])) : (""));
	ui->cell25->setText((board[2][5] > 0) ? (QString::number(board[2][5])) : (""));
	ui->cell26->setText((board[2][6] > 0) ? (QString::number(board[2][6])) : (""));
	ui->cell27->setText((board[2][7] > 0) ? (QString::number(board[2][7])) : (""));
	ui->cell28->setText((board[2][8] > 0) ? (QString::number(board[2][8])) : (""));

	ui->cell30->setText((board[3][0] > 0) ? (QString::number(board[3][0])) : (""));
	ui->cell31->setText((board[3][1] > 0) ? (QString::number(board[3][1])) : (""));
	ui->cell32->setText((board[3][2] > 0) ? (QString::number(board[3][2])) : (""));
	ui->cell33->setText((board[3][3] > 0) ? (QString::number(board[3][3])) : (""));
	ui->cell34->setText((board[3][4] > 0) ? (QString::number(board[3][4])) : (""));
	ui->cell35->setText((board[3][5] > 0) ? (QString::number(board[3][5])) : (""));
	ui->cell36->setText((board[3][6] > 0) ? (QString::number(board[3][6])) : (""));
	ui->cell37->setText((board[3][7] > 0) ? (QString::number(board[3][7])) : (""));
	ui->cell38->setText((board[3][8] > 0) ? (QString::number(board[3][8])) : (""));

	ui->cell40->setText((board[4][0] > 0) ? (QString::number(board[4][0])) : (""));
	ui->cell41->setText((board[4][1] > 0) ? (QString::number(board[4][1])) : (""));
	ui->cell42->setText((board[4][2] > 0) ? (QString::number(board[4][2])) : (""));
	ui->cell43->setText((board[4][3] > 0) ? (QString::number(board[4][3])) : (""));
	ui->cell44->setText((board[4][4] > 0) ? (QString::number(board[4][4])) : (""));
	ui->cell45->setText((board[4][5] > 0) ? (QString::number(board[4][5])) : (""));
	ui->cell46->setText((board[4][6] > 0) ? (QString::number(board[4][6])) : (""));
	ui->cell47->setText((board[4][7] > 0) ? (QString::number(board[4][7])) : (""));
	ui->cell48->setText((board[4][8] > 0) ? (QString::number(board[4][8])) : (""));

	ui->cell50->setText((board[5][0] > 0) ? (QString::number(board[5][0])) : (""));
	ui->cell51->setText((board[5][1] > 0) ? (QString::number(board[5][1])) : (""));
	ui->cell52->setText((board[5][2] > 0) ? (QString::number(board[5][2])) : (""));
	ui->cell53->setText((board[5][3] > 0) ? (QString::number(board[5][3])) : (""));
	ui->cell54->setText((board[5][4] > 0) ? (QString::number(board[5][4])) : (""));
	ui->cell55->setText((board[5][5] > 0) ? (QString::number(board[5][5])) : (""));
	ui->cell56->setText((board[5][6] > 0) ? (QString::number(board[5][6])) : (""));
	ui->cell57->setText((board[5][7] > 0) ? (QString::number(board[5][7])) : (""));
	ui->cell58->setText((board[5][8] > 0) ? (QString::number(board[5][8])) : (""));

	ui->cell60->setText((board[6][0] > 0) ? (QString::number(board[6][0])) : (""));
	ui->cell61->setText((board[6][1] > 0) ? (QString::number(board[6][1])) : (""));
	ui->cell62->setText((board[6][2] > 0) ? (QString::number(board[6][2])) : (""));
	ui->cell63->setText((board[6][3] > 0) ? (QString::number(board[6][3])) : (""));
	ui->cell64->setText((board[6][4] > 0) ? (QString::number(board[6][4])) : (""));
	ui->cell65->setText((board[6][5] > 0) ? (QString::number(board[6][5])) : (""));
	ui->cell66->setText((board[6][6] > 0) ? (QString::number(board[6][6])) : (""));
	ui->cell67->setText((board[6][7] > 0) ? (QString::number(board[6][7])) : (""));
	ui->cell68->setText((board[6][8] > 0) ? (QString::number(board[6][8])) : (""));

	ui->cell70->setText((board[7][0] > 0) ? (QString::number(board[7][0])) : (""));
	ui->cell71->setText((board[7][1] > 0) ? (QString::number(board[7][1])) : (""));
	ui->cell72->setText((board[7][2] > 0) ? (QString::number(board[7][2])) : (""));
	ui->cell73->setText((board[7][3] > 0) ? (QString::number(board[7][3])) : (""));
	ui->cell74->setText((board[7][4] > 0) ? (QString::number(board[7][4])) : (""));
	ui->cell75->setText((board[7][5] > 0) ? (QString::number(board[7][5])) : (""));
	ui->cell76->setText((board[7][6] > 0) ? (QString::number(board[7][6])) : (""));
	ui->cell77->setText((board[7][7] > 0) ? (QString::number(board[7][7])) : (""));
	ui->cell78->setText((board[7][8] > 0) ? (QString::number(board[7][8])) : (""));

	ui->cell80->setText((board[8][0] > 0) ? (QString::number(board[8][0])) : (""));
	ui->cell81->setText((board[8][1] > 0) ? (QString::number(board[8][1])) : (""));
	ui->cell82->setText((board[8][2] > 0) ? (QString::number(board[8][2])) : (""));
	ui->cell83->setText((board[8][3] > 0) ? (QString::number(board[8][3])) : (""));
	ui->cell84->setText((board[8][4] > 0) ? (QString::number(board[8][4])) : (""));
	ui->cell85->setText((board[8][5] > 0) ? (QString::number(board[8][5])) : (""));
	ui->cell86->setText((board[8][6] > 0) ? (QString::number(board[8][6])) : (""));
	ui->cell87->setText((board[8][7] > 0) ? (QString::number(board[8][7])) : (""));
	ui->cell88->setText((board[8][8] > 0) ? (QString::number(board[8][8])) : (""));


	
}
