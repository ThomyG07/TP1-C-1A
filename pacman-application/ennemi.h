#ifndef ENNEMI_H
#define ENNEMI_H
<<<<<<< HEAD
#include "regularmove.h"
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi: public RegularMove, public ObserverCollision, public NotifierCollision
=======
#include"observercollision.h"
#include"NotifierCollision.h"

class Ennemi: public ObserverCollision, public NotifierCollision
>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
{
private:
    int pos_x = 0;
    int pos_y = 0;
public:
    Ennemi(int x, int y, Background* background);
    virtual void new_pos() =0;
<<<<<<< HEAD

    int get_pos_x(){return pos_x;}
    int get_pos_y(){return pos_y;}

    void deplacer(int x, int y);
    virtual void update_pos()=0;
    bool test_collision(int x, int y);
    void collision(NotifierCollision* collision);
=======
    void deplacer(int x, int y ){pos_x +=x; pos_y += y; notify(pos_x, pos_y);}
    void collision(NotifierCollision& notifieur);
    bool test_collision(int x, int y);
>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
};

#endif // ENNEMI_H
