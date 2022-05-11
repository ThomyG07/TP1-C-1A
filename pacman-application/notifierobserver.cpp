#include "notifierobserver.h"
#include <vector>

NotifierObserver::NotifierObserver()
    :observerList({})
{

}

void NotifierObserver::addObserver(ObserverCollision obs)
{
    NotifierObserver::observerList.push_back(obs);
}

void NotifierObserver::removeObserver(ObserverCollision obs)
{
    int position = -1;
    for(int i = 0; i < NotifierObserver::observerList.size(); i++)
    {
        if(NotifierObserver::observerList[i] == obs)
        {
            position = i;
        }
    }
    NotifierObserver::observerList.erase(position);

}


void NotifierObserver::notify(int x, int y)
{
    for(int i = 0; i < NotifierObserver::observerList.size(); i++)
    {
        if(observerList[i].test_collision(x, y))
        {
            observerList[i].collision(this);
        }
    }
}
