#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
class NotifierCollision;

class ObserverCollision
{
public:
    ObserverCollision();
<<<<<<< HEAD
   virtual void collision(NotifierCollision* notifieur)=0;
=======
   virtual void collision(NotifierCollision& notifieur)=0;
>>>>>>> dadb76f6e62de17075dd869e78462445fb511b54
   virtual bool test_collision(int x, int y)=0;
};

#endif // OBSERVERCOLLISION_H
