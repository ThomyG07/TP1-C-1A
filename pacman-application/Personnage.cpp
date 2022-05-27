#include "personnage.h"
#include <string>
#include <string.h>
#include <iostream>
#include "observercollision.h"
#include "NotifierCollision.h"

Personnage::Personnage(int pos_x, int pos_y, Background* background)
    : NotifierCollision(), ObserverCollision(), Interactive(pos_x, pos_y, background)
{
    set_background_image("pacman_dr_1.png");
}

void Personnage::update_pos()
{
    positionner(pos_x, pos_y);
    notify(pos_x, pos_y);
}

void Personnage::collision(NotifierCollision* notifieur)
{
    std::cout << "Collision Personnage" << std::endl;
}

// x et y sont les positions de l'ennemi/pastille
bool Personnage::test_collision(int x, int y)
{
    return ((pos_x == x) || (pos_y == y));
}

void Personnage::key_pressed(char key)
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    if(key  == 's' || key == 'S')
    {
        pos_y++;
        if(pos_y > yMax-1){
            pos_y = 0;
        }
        set_background_image("pacman_ba_4");
    }
    else if(key == 'z' || key == 'Z')
    {
        pos_y--;
        if(pos_y < yMin){
            pos_y = yMax-1;
        }
        set_background_image("pacman_ha_4");
    }
    else if(key == 'q' || key == 'Q')
    {
        pos_x--;
        if(pos_x < xMin){
            pos_x = xMax-1;
        }
        set_background_image("pacman_ga_4");
    }
    else if(key == 'd' || key == 'D')
    {
        pos_x++;
        if(pos_x > xMax-1){
            pos_x = 0;
        }
        set_background_image("pacman_dr_4");
    }
    notify(pos_x, pos_y);
    update_pos();

}

void Personnage::arrow_pressed(std::string cmd)
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    if(cmd=="DOWN")
    {
        pos_y++;
        if(pos_y > yMax-1){
            pos_y = 0;
        }
        set_background_image("pacman_ba_4");
    }
    else if(cmd == "UP")
    {
        pos_y--;
        if(pos_y < yMin){
            pos_y = yMax-1;
        }
        set_background_image("pacman_ha_4");
    }
    else if(cmd == "LEFT")
    {
        pos_x--;
        if(pos_x < xMin){
            pos_x = xMax-1;
        }
        set_background_image("pacman_ga_4");
    }
    else if(cmd == "RIGHT")
    {
        pos_x++;
        if(pos_x > xMax-1){
            pos_x = 0;
        }
        set_background_image("pacman_dr_4");
    }
    notify(pos_x, pos_y);
    update_pos();
}
