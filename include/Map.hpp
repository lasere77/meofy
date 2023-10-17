#pragma once

#include "Libs.hpp"
#include <array>

#define nbLigneOnMap 91 // 83, 91
#define nbColoneOnMap 51 //47, 51
#define nbInstancesMaps nbLigneOnMap*nbColoneOnMap
#define mapsSize 20
#define bordeur 1 // 3, 1

class Map {

    public:
        Map();
        sf::RectangleShape mapShape;
        void init();
    
    private:
        int x;
        int y;

};