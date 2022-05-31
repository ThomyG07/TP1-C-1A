#include "pastille.h"
#include "drawableelem.h"
#include "ObserverCollision.h"
#include <iostream>
#include "movable.h"
#include "Personnage.h"


Pastille::Pastille(int x, int y, Background* background, Personnage* personnage)
    : pos_x(x), pos_y(y), ObserverCollision(), DrawableElem(x, y, background), perso(personnage)
{
    set_background_image("pastille.png");

}
bool Pastille::test_collision(int x,int y)
{
    return pos_x == x && (pos_y == y);

};

void Pastille::collision(NotifierCollision* notifeur)
{

    if(isVisible()){
        perso->increase_score();
        std::cout << "Score : " << perso->get_score() << std::endl;
        hide();
    }
};

