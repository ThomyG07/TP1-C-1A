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
    Background* background = new Background(parent);
    Personnage* pacman = new Personnage(20, 10, background);
    Pastille* pastille = new Pastille(5, 20, background);
    Clyde* clyde = new Clyde(12, 13, background);
    pacman->addObserver(pastille);
    clyde->addObserver(pacman);
    pacman->addObserver(clyde);

}

MainWindow::~MainWindow()
{
    delete ui;
}

