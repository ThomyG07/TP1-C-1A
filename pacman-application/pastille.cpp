#include "pastille.h"
#include "drawableelem.h"
#include "ObserverCollision.h"
#include <iostream>
#include "movable.h"


Pastille::Pastille()
{
    set_backround_image(pastille.png);

}
bool test_collision(int x,int y)
{
    int pos_x= get_pos_x();
    int pos_y= get_pos_y();
    if(pos_x==x && pos_y==y)
    {
        return 1;
    }
    return 0;

};
void collision(NotifierCollision notifeur)
{


};

