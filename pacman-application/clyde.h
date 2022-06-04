#ifndef CLYDE_H
#define CLYDE_H
#include "ennemi.h"
#include "Personnage.h"

class Clyde: public Ennemi
{
public:
    Clyde(int x, int y, Background* background, Personnage* personnage);
    void new_pos();
    void update_pos();
    void setPosition(int x, int y){set_pos_x(x);set_pos_y(y);update_pos();}
};

#endif // CLYDE_H
