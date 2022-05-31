#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "interactive.h"
#include "Notifiercollision.h"
#include "observercollision.h"

class Personnage: public NotifierCollision, public ObserverCollision, public Interactive
{
private:
    std::string deplacement;
public:
    Personnage(int x, int y, Background* background);
    void setDeplacement(std::string deplacement);
    std::string getDeplacement();
    void key_pressed(char key);
    void collision(NotifierCollision* notifier);
    bool test_collision(int x, int y);
    void update_pos();
    void arrow_pressed(std::string cmd);
};

#endif // PERSONNAGE_H
