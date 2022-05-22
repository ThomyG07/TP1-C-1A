#include "notifiercollision.h"
#include "observercollision.h"
#include <vector>

NotifierCollision::NotifierCollision()
    :observerList(std::vector<ObserverCollision*>())
{

}

void NotifierCollision::addObserver(ObserverCollision* obs)
{
    observerList.push_back(obs);
}

void NotifierCollision::removeObserver(ObserverCollision* obs)
{
    int position = -1;
    for(int i = 0; i < observerList.size(); i++)
    {
        if(observerList[i] == obs)
        {
            position = i;
        }
    }
    observerList.erase(observerList.begin() + position);

}


void NotifierCollision::notify(int x, int y)
{
    for(int i = 0; i < observerList.size(); i++)
    {
        if(observerList[i]->test_collision(x, y))
        {
            observerList[i]->collision(this);
        }
    }
}
