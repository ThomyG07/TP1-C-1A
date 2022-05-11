#include "personnage.h"
#include <string>
#include "NotifierObserver.h"

Personnage::Personnage()
    : NotifierObserver()
{

}

void Personnage::setDeplacement(std::string deplacement)
{
    Personnage::deplacement = deplacement;
    Personnage::notify();
}

std::string Personnage::getDeplacement()
{
    return Personnage::deplacement;
}
