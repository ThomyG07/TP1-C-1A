#ifndef ENNEMI_H
#define ENNEMI_H
#include "regularmove.h"

class Ennemi: public RegularMove
{
private:
    int pos_x;
    int pos_y;
public:
    Ennemi();
    virtual void new_pos() =0;
    void deplacer(int x, int y ){pos_x +=x; pos_y += y;}
    void update_pos(int x, int y){pos_x=x; pos_y=y;}
};

#endif // ENNEMI_H
