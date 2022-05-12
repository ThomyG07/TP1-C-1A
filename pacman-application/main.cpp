#include<iostream>
#include<string>
#include <exception>
#include "exceptionsizetab.h"
#include "Clyde.h"
#include "Personnage.h"

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
    int iteration = 0;

    if(nb_ennemis <= 0)
    {
        throw ExceptionSizeTab();
    }

    for(iteration=0;iteration< nb_ennemis;++iteration)
    {
        if (ennemis_x[iteration] == x && ennemis_y[iteration] == y) { return 1; }
    }
    return 0;
};

//Class Exception
class ExceptionCommand
{

};
class ExceptionBound
{
};
//

bool deplacer_personnage(int& x, int& y, std::string cmd);
int main(int argc, char* argv[])
{
    Personnage pacman;
    Clyde totot;

    int x=3, y=4;

    int ennemis_x[4]={1,2,3,4}, ennemis_y[4]={1,2,3,4};
    if (detecter_collision(ennemis_x,ennemis_y,4,x,y))
    {
     std::cout << "Collision" << std::endl;
    };
    std::string cmd;
    try{
    do
    {
        std::getline(std::cin,cmd);
       std::cout<<deplacer_personnage(x, y, cmd); // affiche 1 qd personnage peut se deplacer
    }while(cmd != "");
    }
    catch(ExceptionCommand& ec)
    {

        std::cout<<"La commande n'est pas reconnue "<< std::endl;
    }
    catch(ExceptionBound& eb)
    {

       std::cout<<"La joueur est hors limite"<< std::endl;
    }
    try{
        detecter_collision(ennemis_x,ennemis_y,4,x,y);
    }
    catch(ExceptionSizeTab& est)
    {
        std::cout << "Nombre d'éléments incorrects" << std::endl;
    }
    return 0;

}

bool deplacer_personnage(int& x, int& y, std::string cmd)
{
    const int xmin = 0, ymin = 0, xmax = 32, ymax = 15;
    if(x<xmin || x >xmax || y<ymin || y > ymax)
    {
      throw ExceptionBound();
    }
    if(cmd=="UP")
    {
        if(y>ymin)
        {
            y--;
            return true;
        }
        else
        {
            return false;

        }
    }
    else if(cmd=="DOWN")
    {
        if(y<ymax)
        {
            y++;
            return true;
        }
        else
        {
            return false;

        }
    }
    else if(cmd == "LEFT")
    {
        if(x>xmin)
        {
            x--;
            return true;
        }
        else
        {
            return false;

        }
    }
    else if(cmd =="RIGHT")
    {
        if(x<xmax)
        {
            x++;
            return true;
        }
        else
        {
            return false;

        }
    }
    else if(cmd =="IDLE")
    {
        return false;
    }
    else
    {
       throw ExceptionCommand();

    }

}
