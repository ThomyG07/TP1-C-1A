#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "personnage.h"
#include "clyde.h"
#include "pastille.h"
#include "background.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Background* background = ui->centralwidget;
    Personnage* pacman = new Personnage(0, 0, background);
    Pastille* pastille = new Pastille(5, 4,  background);
    Clyde* clyde = new Clyde(6, 2,  background);

    pacman->addObserver(pastille);
    clyde->addObserver(pacman);
    pacman->addObserver(clyde);

}

MainWindow::~MainWindow()
{
    delete ui;
}

