#include "pastille.h"
#include "drawableelem.h"
#include "ObserverCollision.h"
#include <iostream>
#include "movable.h"


Pastille::Pastille(int x, int y, Background* background)
    : pos_x(x), pos_y(y), ObserverCollision(), DrawableElem(x, y, background)
{
    set_background_image("pastille.png");

}
bool Pastille::test_collision(int x,int y)
{
    return pos_x == x && (pos_y == y);

};

void Pastille::collision(NotifierCollision* notifeur)
{

    std::cout<< "collision" << std::endl;
    hide();
};

