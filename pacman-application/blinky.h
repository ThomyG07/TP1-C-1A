#ifndef BLINKY_H
#define BLINKY_H

#include "ennemi.h"
#include "Personnage.h"

class Blinky : public Ennemi
{
private:
    Personnage* personnage;
public:
    Blinky(int x, int y, Background* background, Personnage* personnage);
    void update_pos();
    void new_pos();
    void setPosition(int x, int y){set_pos_x(x);set_pos_y(y);update_pos();}
};

#endif // BLINKY_H
