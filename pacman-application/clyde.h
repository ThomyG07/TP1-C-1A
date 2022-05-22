#ifndef CLYDE_H
#define CLYDE_H
#include "ennemi.h"


class Clyde: public Ennemi
{
public:
    Clyde(int x, int y, Background* background);
    void new_pos();
};

#endif // CLYDE_H
