#include "personnage.h"
#include <string>
#include "NotifierCollision.h"
Personnage::Personnage()
    : NotifierObserver()
{

}

void Personnage::setDeplacement(std::string deplacement)
{
    Personnage::deplacement = deplacement;
    notify(pos_x, pos_y);
}

std::string Personnage::getDeplacement()
{
    return Personnage::deplacement;
}
