#include "sudoku.h"
#include "ui_sudoku.h"

#include "boardSolver.hpp"

//const int sizeBoard = 9;

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

void MainWindow::on_pushButton_2_clicked()
{
	
	BoardSolver boardSolver(this->board, sizeBoard, sizeBoard);
	boardSolver.solve();

	const QList<QLineEdit*> cells = ui->centralwidget->findChildren<QLineEdit*>();

	for(QLineEdit* cell : cells)
	{
		if (cell->text().isEmpty())
		{
			cell->setStyleSheet("color: rgb(255,0,0)");

			std::string cellName = cell->objectName().toUtf8().constData();
			std::string cellPosition = cellName.substr(cellName.find("cell") + 4);
			int row = cellPosition[0] - '0';
			int col = cellPosition[1] - '0';
			cell->setText((board[row][col] > 0) ? (QString::number(board[row][col])) : (""));
		}
	}
}


void MainWindow::on_pushButton_clicked()
{
	int difficultyLevel = 33;
	BoardCreator<sizeBoard, sizeBoard> boardCreator;
	boardCreator.createBoard(difficultyLevel);
	this->board = boardCreator.getBoard(); 
	const QList<QLineEdit*> cells = ui->centralwidget->findChildren<QLineEdit*>();
	
	for(QLineEdit* cell : cells)
	{
		if(!cell->text().isEmpty())
		{
			cell->setText("");
		}
		cell->setAlignment(Qt::AlignCenter);
		cell->setStyleSheet("font-weight: bold;color: rgb(0,0,0)");
		std::string cellName = cell->objectName().toUtf8().constData();
		std::string cellPosition = cellName.substr(cellName.find("cell") + 4);
		int row = cellPosition[0] - '0';
		int col = cellPosition[1] - '0';
		cell->setText((board[row][col] > 0) ? (QString::number(board[row][col])) : (""));
		cell->setReadOnly((board[row][col] > 0) ? (true) : (false));
		
		
	}
	
	
}
