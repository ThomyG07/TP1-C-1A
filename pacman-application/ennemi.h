#ifndef ENNEMI_H
#define ENNEMI_H


class Ennemi
{
private:
    int pos_x;
    int pos_y;
public:
    Ennemi();
    virtual void new_pos() =0;
    void deplacer(int x, int y ){pos_x +=x; pos_y += y;}
};

#endif // ENNEMI_H
