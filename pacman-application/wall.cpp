#include "wall.h"
#include<iostream>
Wall::Wall(int x, int y, Background* background): pos_x(x), pos_y(y), DrawableElem(x, y, background), ObserverCollision()
{
  set_background_image("wall (2).png");
}

bool Wall::test_collision(int x, int y)
{
    return (pos_x == x && pos_y == y );
}

void Wall::collision(NotifierCollision* notifier)
{
    std::cout << "Collision Wall" << std::endl;
}
