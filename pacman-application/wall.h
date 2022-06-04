#ifndef WALL_H
#define WALL_H

#include "drawableelem.h"
#include "observercollision.h"
#include "NotifierCollision.h"

class Wall: public ObserverCollision, public DrawableElem
{
private:
    int pos_x = 0;
    int pos_y = 0;
public:
    Wall(int x, int y, Background* background);
    bool test_collision(int x, int y);
    void collision(NotifierCollision* collision);
    std::string Gettype();
};

#endif // WALL_H
