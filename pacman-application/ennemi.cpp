#include "ennemi.h"
<<<<<<< HEAD
#include "clyde.h"

#include <iostream>

Ennemi::Ennemi(int x, int y, Background* background)
    : RegularMove(x, y, background), ObserverCollision(), NotifierCollision()
{

}

void Ennemi::update_pos()
{
    positionner(get_pos_x(), get_pos_y());
    notify(get_pos_x(), get_pos_y());
}

// IL BOUGE PAS

void Ennemi::deplacer(int x, int y)
=======
#include<iostream>
#include"NotifierCollision.h"
Ennemi::Ennemi()
>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
{
    const int xMin = 0, yMin = 0, xMax = 32, yMax = 15;

    // Si la coordonnée y est modifié
    if(y != 0){

        // Si la coordonnée y est négative
        if(y < 0){

            if(pos_y + y < yMin)
            {
                pos_y = yMax-1;
            }else{
                pos_y += y;

            }
        }
        if(y > 0){
            if(pos_y + y > yMax-1)
            {
                pos_y = 0;
            }else{
                pos_y += y;
            }
        }
    }

    if(x != 0){
        if(x < 0){
            if(pos_x + x < xMin)
            {
                pos_x = xMax-1;
            }else{
                pos_x += x;
            }

        }
        if(x > 0){
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

<<<<<<< HEAD
bool Ennemi::test_collision(int x, int y)
{
    return (pos_x == x && pos_y == y );
}

void Ennemi::collision(NotifierCollision* notifier)
{
    std::cout << "Collision Ennemi" << std::endl;
}
=======
void Ennemi::collision(NotifierCollision& notifieur)
{

    std::cout<<"collision detecter"<<std::endl;

}
bool Ennemi::test_collision(int x, int y)
{
    if(x==pos_x && y==pos_y) return true;
    else return false;
}

>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
