#include "clyde.h"
#include<random>
#include<ctime>

Clyde::Clyde()
{
   set_backround_image(clyde_ba_1.png);
}
void Clyde::new_pos()
{
    int val = rand() % 3 + 1;
    switch(val)
    {
        case 1: deplacer(1,0);
        case 2: deplacer(-1,0);
        case 3: deplacer(0,1);
        case 4: deplacer(0,-1);


    }

}
