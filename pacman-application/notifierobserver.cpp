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

void NotifierObserver::notify(int x, int y)
{

}
