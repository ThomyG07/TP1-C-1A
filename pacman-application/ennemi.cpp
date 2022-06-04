#include "ennemi.h"
#include "regularmove.h"
#include "observercollision.h"
#include "NotifierCollision.h"
#include <iostream>

Ennemi::Ennemi(int x, int y, Background* background, Personnage* personnage)
    : RegularMove(x, y, background), ObserverCollision(), NotifierCollision(), perso(personnage)
{

}

void Ennemi::update_pos()
{
    positionner(get_pos_x(), get_pos_y());
    notify(get_pos_x(), get_pos_y());
}

// IL BOUGE PAS

void Ennemi::deplacer(int x, int y)
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    // Si la coordonnée y est modifié
    if(y != 0){

        // Si la coordonnée y est négative
        if(y < 0 && notifyWall(pos_x,pos_y-1)== false){

            if(pos_y + y < yMin)
            {
                pos_y = yMax-1;
            }else{
                pos_y += y;

            }
        }
        if(y > 0 && notifyWall(pos_x,pos_y+1)== false){
            if(pos_y + y > yMax-1)
            {
                pos_y = 0;
            }else{
                pos_y += y;
            }
        }
    }

    if(x != 0){
        if(x < 0 && notifyWall(pos_x-1,pos_y)== false){
            if(pos_x + x < xMin)
            {
                pos_x = xMax-1;
            }else{
                pos_x += x;
            }

        }
        if(x > 0 && notifyWall(pos_x+1,pos_y)== false){
            if(pos_x + x > xMax-1)
            {
                pos_x = 0;
            }else{
                pos_x += x;
            }
        }
    }

    notify(pos_x, pos_y);
    positionner(pos_x, pos_y);
}

bool Ennemi::test_collision(int x, int y)
{
    return (pos_x == x && pos_y == y );
}

void Ennemi::collision(NotifierCollision* notifier)
{
    perso->decrease_life();
    std::cout << "Nombre de vie : " << perso->get_lifes() << std::endl;
}
