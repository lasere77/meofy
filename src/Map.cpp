#include "../include/Map.hpp"
#include <iostream>

Map::Map() {
    std::cout << "map was creat" << std::endl;
}

int globalId = 0;
int nbligne = 0;

void Map::init() {
    x = (mapsSize + bordeur) * globalId;
    y = (mapsSize + bordeur) * nbligne; 

    if(globalId % nbLigneOnMap == 0 && globalId != 0) {
        nbligne++;
        globalId -= nbLigneOnMap;
        x = (mapsSize + bordeur) * globalId;
        y = (mapsSize + bordeur) * nbligne;
    }
    mapShape.setPosition(x, y);
    mapShape.setSize(sf::Vector2f(mapsSize, mapsSize));
    mapShape.setFillColor(sf::Color(40, 40, 40));
    globalId++;
}
