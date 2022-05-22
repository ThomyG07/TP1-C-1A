#include "personnage.h"
#include <string>
#include <string.h>
#include <iostream>
#include "observercollision.h"
#include "NotifierCollision.h"

Personnage::Personnage()
    : NotifierCollision(), ObserverCollision(), Interactive(pos_x, pos_y, )
{
    set_background_image("D:\\TP-Informatique\\TP1-C-1A\\images\\pacman_dr_1");
}

void Personnage::update_pos()
{
    positionner(pos_x, pos_y);
    notify(pos_x, pos_y);
}

void Personnage::collision(NotifierCollision notifieur)
{
    std::cout << "Collision" << std::endl;
}

// x et y sont les positions de l'ennemi/pastille
bool Personnage::test_collision(int x, int y)
{
    return ((pos_x == x) || (pos_y == y));
}

void Personnage::key_pressed(char key)
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    if(key == 'Z')
    {
        pos_y++;
        if(pos_y > yMax){
            pos_y = 0;
        }
    }
    else if(key  == 'S')
    {
        pos_y--;
        if(pos_y < yMin){
            pos_y = yMax;
        }
    }
    else if(key == 'Q')
    {
        pos_x--;
        if(pos_x > xMin){
            pos_x = xMax;
        }
    }
    else if(key == 'D')
    {
        pos_x++;
        if(pos_x > xMax){
            pos_x = 0;
        }
    }
    notify(pos_x, pos_y);
    update_pos();

}

void Personnage::arrow_pressed(std::string cmd)
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    if(cmd=="UP")
    {
        pos_y++;
        if(pos_y > yMax){
            pos_y = 0;
        }
    }
    else if(cmd == "DOWN")
    {
        pos_y--;
        if(pos_y < yMin){
            pos_y = yMax;
        }
    }
    else if(cmd == "LEFT")
    {
        pos_x--;
        if(pos_x > xMin){
            pos_x = xMax;
        }
    }
    else if(cmd == "RIGHT")
    {
        pos_x++;
        if(pos_x > xMax){
            pos_x = 0;
        }
    }
    notify(pos_x, pos_y);
    update_pos();
}
