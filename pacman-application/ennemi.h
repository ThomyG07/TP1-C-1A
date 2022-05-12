#ifndef ENNEMI_H
#define ENNEMI_H
#include"observercollision.h"
#include"NotifierCollision.h"

class Ennemi: public ObserverCollision, public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
public:
    Ennemi();
    virtual void new_pos() =0;
    void deplacer(int x, int y ){pos_x +=x; pos_y += y; notify(pos_x, pos_y);}
    void collision(NotifierCollision& notifieur);
    bool test_collision(int x, int y);
};

#endif // ENNEMI_H
