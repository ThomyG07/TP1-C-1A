#ifndef MAP_H
#define MAP_H

#include <string>
#include <vector>

#include "Personnage.h"
#include "clyde.h"
#include "blinky.h"

class Map
{
private:
    std::string map_file;
public:
    Map(std::string map_file);
    void createMap(Personnage* personnage, Blinky* blinky, Clyde* clyde, Background* background);
};

#endif // MAP_H
