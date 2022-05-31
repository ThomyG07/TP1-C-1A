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
};

#endif // BLINKY_H
