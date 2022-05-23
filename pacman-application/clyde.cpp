#include "clyde.h"
#include<random>
#include<ctime>

#include <iostream>

Clyde::Clyde(int x, int y, Background* background)
    : Ennemi(x, y, background)
{
   set_background_image("clyde_ba_1.png");
}


void Clyde::new_pos()
{
    int val = rand() % 4;
    std::cout << val << std::endl;
    switch(val)
    {
        case 1: deplacer(1,0);
        break;
        case 2: deplacer(-1,0);
        case 3: deplacer(0,1);
        case 4: deplacer(0,-1);


    }
    update_pos();
}
