#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "wall.h"
#include "Personnage.h"
#include "clyde.h"
#include "pastille.h"
#include "background.h"
#include "blinky.h"
#include "map.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Background* background = ui->centralwidget;
    Personnage* pacman = new Personnage(0, 0, background);
    Blinky* blinky = new Blinky(4, 9, background, pacman);

    Clyde* clyde = new Clyde(6, 2,  background, pacman);

    blinky->addObserver(pacman);
    blinky->addObserver(clyde);

    pacman->addObserver(blinky);
    pacman->addObserver(clyde);

    clyde->addObserver(pacman);
    clyde->addObserver(blinky);

    Map* map = new Map("map.txt");
    map->createMap(pacman, blinky, clyde, background);
}

MainWindow::~MainWindow()
{
    delete ui;
}

