#ifndef ENNEMI_H
#define ENNEMI_H

#include "regularmove.h"
#include "Personnage.h"
#include "observercollision.h"
#include "NotifierCollision.h"

class Ennemi: public ObserverCollision, public NotifierCollision, public RegularMove
{
private:
    int pos_x = 0;
    int pos_y = 0;
    Personnage* perso;
public:
    Ennemi(int x, int y, Background* background, Personnage* personnage);
    virtual void new_pos() =0;
    int get_pos_x(){return pos_x;}
    int get_pos_y(){return pos_y;}

    Personnage* getPersonnage(){return perso;}

    void deplacer(int x, int y);
    virtual void update_pos()=0;
    bool test_collision(int x, int y);
    void collision(NotifierCollision* collision);
    std::string Gettype();
};

#endif // ENNEMI_H
