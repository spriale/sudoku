#include "sudoku.h"
#include "ui_sudoku.h"
#include "boardCreatorDynamic.hpp"



const int sizeBoard = 9;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	//BOLD FONT
	QFont font = ui->centralwidget->font();
	font.setWeight(QFont::Bold);
	ui->centralwidget->setFont(font);
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
	const QList<QLineEdit*> cells = ui->centralwidget->findChildren<QLineEdit*>();
	
	for(QLineEdit* cell : cells)
	{
		cell->setAlignment(Qt::AlignCenter);
		std::string cellName = cell->objectName().toUtf8().constData();
		std::string cellPosition = cellName.substr(cellName.find("cell") + 4);
		int row = cellPosition[0] - '0';
		int col = cellPosition[1] - '0';
		cell->setText((board[row][col] > 0) ? (QString::number(board[row][col])) : (""));
		cell->setReadOnly((board[row][col] > 0) ? (true) : (false));
		
		
	}
	
	
}
