#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Personnage.h"
#include "clyde.h"
#include "pastille.h"
#include "background.h"
#include "blinky.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Background* background = ui->centralwidget;
    Personnage* pacman = new Personnage(0, 0, background);
    Blinky* blinky = new Blinky(4, 9, background, pacman);
    Pastille* pastille = new Pastille(5, 4,  background);
    Clyde* clyde = new Clyde(6, 2,  background);

    blinky->addObserver(pacman);
    blinky->addObserver(clyde);

    pacman->addObserver(pastille);
    pacman->addObserver(blinky);
    pacman->addObserver(clyde);

    clyde->addObserver(pacman);
    clyde->addObserver(blinky);

}

MainWindow::~MainWindow()
{
    delete ui;
}

