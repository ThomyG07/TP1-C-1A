#ifndef PASTILLE_H
#define PASTILLE_H
#include "NotifierCollision.h"
#include "observercollision.h"
#include "drawableelem.h"
class Pastille : public ObserverCollision, public DrawableElem
{
private:
    int pos_x;
    int pos_y;

public:
    Pastille(int x, int y, Background* background);
    bool test_collision(int x,int y);
    void collision(NotifierCollision* notifeur);
};

#endif // PASTILLE_H
