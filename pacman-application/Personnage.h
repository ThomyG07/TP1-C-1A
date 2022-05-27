#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
<<<<<<< HEAD
#include "interactive.h"
#include "notifiercollision.h"
#include "observercollision.h"

class Personnage: public NotifierCollision, public ObserverCollision, public Interactive
=======
#include "NotifierCollision.h"

class Personnage: public NotifierCollision
>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
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
