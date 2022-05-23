#include "ennemi.h"
#include "clyde.h"

#include <iostream>

Ennemi::Ennemi(int x, int y, Background* background)
    : RegularMove(x, y, background), ObserverCollision(), NotifierCollision()
{

}

void Ennemi::update_pos()
{
    positionner(pos_x, pos_y);
    notify(pos_x, pos_y);
}

// IL BOUGE PAS

void Ennemi::deplacer(int x, int y)
{
    pos_x += x;
    pos_y += y;
    update_pos();
}

bool Ennemi::test_collision(int x, int y)
{
    return (pos_x == x && pos_y == y );
}

void Ennemi::collision(NotifierCollision* notifier)
{
    std::cout << "Collision" << std::endl;
}
