#ifndef NOTIFIEROBSERVER_H
#define NOTIFIEROBSERVER_H
#include <vector>

class ObserverCollision;
class NotifierObserver
{

private:
    std::vector<ObserverCollision*> observerList;
public:
    NotifierObserver();
    void addObserver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);
    void notify(int x, int y);
};

#endif // NOTIFIEROBSERVER_H
