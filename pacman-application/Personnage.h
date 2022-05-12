#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "NotifierCollision.h"

class Personnage: public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
    std::string deplacement;
public:
    Personnage();
    void setDeplacement(std::string deplacement);
    std::string getDeplacement();
};

#endif // PERSONNAGE_H
