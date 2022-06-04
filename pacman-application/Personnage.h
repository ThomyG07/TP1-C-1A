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
    int score;
    int lifes;
public:
    Personnage(int x, int y, Background* background);

    void setDeplacement(std::string deplacement);
    std::string getDeplacement();

    void key_pressed(char key);
    void collision(NotifierCollision* notifier);

    bool test_collision(int x, int y);
    void update_pos();
    int get_score() {return score;}
    void increase_score(){ score+=150;}
    int get_lifes() {return score;}
    void decrease_life(){ lifes--;}
    void arrow_pressed(std::string cmd);
    std::string getType(){ return "Personnage";}
    void setPosition(int x, int y){pos_x=x;pos_y=y;update_pos();}

};

#endif // PERSONNAGE_H
