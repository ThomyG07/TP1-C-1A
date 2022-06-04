#include "map.h"
#include <cstring>

#include <iostream>
#include "background.h"
#include <fstream>

#include "pastille.h"
#include "wall.h"

Map::Map(std::string _map_file)
    :  map_file(_map_file)
{

}

void Map::createMap(Personnage* personnage, Blinky* blinky, Clyde* clyde, Background* background)
{
    std::string line;
    int lineNumber = 0;
    std::ifstream file(map_file);
    if(file.is_open())
    {
        while(std::getline(file, line))
        {
            for(int i = 0; i < line.length(); i++)
            {
                char type = line[i];
                switch(type)
                {
                    case 'X':
                    {
                        Wall* wall = new Wall(i,lineNumber, background);
                        personnage->addObserver(wall);
                        blinky->addObserver(wall);
                        clyde->addObserver(wall);
                        break;
                    }
                    case '.':
                    {
                        Pastille* pastille = new Pastille(i, lineNumber, background, personnage);
                        personnage->addObserver(pastille);
                        blinky->addObserver(pastille);
                        clyde->addObserver(pastille);
                        break;
                    }
                    case 'P':
                    {
                        personnage->setPosition(i, lineNumber);
                        break;
                    }
                    case 'B':
                    {
                        blinky->setPosition(i, lineNumber);
                        break;
                    }
                    case 'C':
                    {
                        clyde->setPosition(i, lineNumber);
                        break;
                    }
                }
            }
            lineNumber++;
        }
    }

}
