#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
class NotifierCollision;

class ObserverCollision
{
public:
    ObserverCollision();
   virtual void collision(NotifierCollision* notifieur)=0;
   virtual bool test_collision(int x, int y)=0;
};

#endif // OBSERVERCOLLISION_H
