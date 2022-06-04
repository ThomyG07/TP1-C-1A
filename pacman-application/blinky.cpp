#include "blinky.h"
#include <cmath>
#include "ennemi.h"
#include <vector>
#include <tuple>

Blinky::Blinky(int x, int y, Background* background, Personnage* _personnage)
 :Ennemi(x, y, background, _personnage)
{
    set_background_image("blinky_ba_2.png");
}

void Blinky::new_pos()
{
    update_pos();

}

void Blinky::update_pos()
{
    int pos_personnage_x = personnage->get_pos_x();
    int pos_personnage_y = personnage->get_pos_y();

    int pos_blinky_x = get_pos_x();
    int pos_blinky_y=  get_pos_y();

    int vector_x_min = 0;
    int vector_y_min = 0;

    std::vector<std::tuple<int, int>> vectors = {std::make_tuple(1, 0), std::make_tuple(-1, 0), std::make_tuple(0, 1), std::make_tuple(0, -1), std::make_tuple(0, 0)};

    float distance = 255.0;

    const int xMax = 32, yMax = 15;

    for(int i = 0; i < vectors.size(); i++)
    {


        std::tuple<int, int> vector = vectors[i];

        int vector_x = std::get<0>(vector);
        int vector_y = std::get<1>(vector);

        int temp_x = pos_blinky_x + vector_x;
        int temp_y = pos_blinky_y + vector_y;


        if(vector_x > 0 ){
            if(abs(pos_personnage_x - (xMax-1 + temp_x)) < abs(pos_personnage_x - temp_x) )
            {
                temp_x = (xMax-1 + temp_x);
            }
        }

        if(vector_y > 0)
        {
            if(abs(pos_personnage_y - (yMax-1 + temp_y)) < abs(pos_personnage_y - temp_y) )
            {
                temp_y = (yMax-1 + temp_y);
            }
        }
        if(vector_x < 0){
            if(abs((pos_personnage_y-1+xMax) - temp_x) < abs(pos_personnage_x - temp_x) )
            {
                temp_x = vector_x;
            }
        }
        if(vector_y < 0)
        {
            if(abs((pos_personnage_y-1+yMax) - temp_y) < abs(pos_personnage_y - temp_y) )
            {
                temp_y = vector_y;
            }
        }

        int temp_distance = std::hypot(pos_personnage_x - temp_x,pos_personnage_y - temp_y);


        if(distance > temp_distance)
        {
            distance = temp_distance;
            vector_x_min = vector_x;
            vector_y_min = vector_y;
        }

    }
    deplacer(vector_x_min, vector_y_min);
}
