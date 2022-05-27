#ifndef ENNEMI_H
#define ENNEMI_H
#include "regularmove.h"
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi: public RegularMove, public ObserverCollision, public NotifierCollision
{
private:
    int pos_x = 0;
    int pos_y = 0;
public:
    Ennemi(int x, int y, Background* background);
    virtual void new_pos() =0;

    int get_pos_x(){return pos_x;}
    int get_pos_y(){return pos_y;}

    void deplacer(int x, int y);
    virtual void update_pos()=0;
    bool test_collision(int x, int y);
    void collision(NotifierCollision* collision);
};

#endif // ENNEMI_H
