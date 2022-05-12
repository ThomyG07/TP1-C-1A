#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H
class ObserverCollision;

#include <vector>

class NotifierCollision
{

private:
    std::vector<ObserverCollision*> observerList;
public:
    NotifierCollision();
    void addObserver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);
    void notify(int x, int y);
};
#endif // NOTIFIERCOLLISION_H
