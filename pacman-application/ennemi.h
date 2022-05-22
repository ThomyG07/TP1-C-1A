#ifndef ENNEMI_H
#define ENNEMI_H
#include "regularmove.h"
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi: public RegularMove, public ObserverCollision, public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
public:
    Ennemi(int x, int y, Background* background);
    virtual void new_pos() =0;
    void deplacer(int x, int y);
    void update_pos();
    bool test_collision(int x, int y);
    void collision(NotifierCollision* collision);
};

#endif // ENNEMI_H
