#include "clyde.h"
#include<random>
#include<ctime>

#include <iostream>

Clyde::Clyde(int x, int y, Background* background, Personnage* personnage)
    : Ennemi(x, y, background, personnage)
{
   set_background_image("clyde_ha_2.png");
}

void Clyde::update_pos(){
    new_pos();
}


void Clyde::new_pos()
{
    int val = rand() % 4;
    switch(val)
    {
        case 1: deplacer(1,0);
            break;
        case 2: deplacer(-1,0);
        break;
        case 3: deplacer(0,1);
        break;
        case 4: deplacer(0,-1);
                break;
    }
}

