#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "wall.h"
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
<<<<<<< Updated upstream
    Pastille* pastille = new Pastille(5, 4,  background, pacman);
    Clyde* clyde = new Clyde(6, 2,  background, pacman);

    blinky->addObserver(pacman);
=======
    Pastille* pastille = new Pastille(5, 4,  background);
    Clyde* clyde = new Clyde(6, 2,  background);
    Wall* wall = new Wall(6, 2,  background);
     Wall* wall2 = new Wall(7, 2,  background);

    blinky->addObserver(pacman);
    blinky->addObserver(clyde);
    blinky->addObserver(wall);
    blinky->addObserver(wall2);
>>>>>>> Stashed changes

    pacman->addObserver(pastille);
    pacman->addObserver(blinky);
    pacman->addObserver(clyde);
    pacman->addObserver(wall);
    pacman->addObserver(wall2);


    clyde->addObserver(pacman);
<<<<<<< Updated upstream
=======
    clyde->addObserver(blinky);
    clyde->addObserver(wall);
    clyde->addObserver(wall2);


>>>>>>> Stashed changes

}

MainWindow::~MainWindow()
{
    delete ui;
}

