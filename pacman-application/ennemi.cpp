#include "ennemi.h"
#include<iostream>
#include"NotifierCollision.h"
Ennemi::Ennemi()
{



}

void Ennemi::collision(NotifierCollision& notifieur)
{

    std::cout<<"collision detecter"<<std::endl;

}
bool Ennemi::test_collision(int x, int y)
{
    if(x==pos_x && y==pos_y) return true;
    else return false;
}

