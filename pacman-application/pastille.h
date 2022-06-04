#ifndef PASTILLE_H
#define PASTILLE_H
#include "NotifierCollision.h"
#include "observercollision.h"
#include "Personnage.h"
#include "drawableelem.h"

class Pastille : public ObserverCollision, public DrawableElem
{
private:
    int pos_x;
    int pos_y;
    Personnage* perso;

public:
    Pastille(int x, int y, Background* background, Personnage* personnage);
    bool test_collision(int x,int y);
    void collision(NotifierCollision* notifeur);
    std::string getType(){ return "Pastille";}
};

#endif // PASTILLE_H
