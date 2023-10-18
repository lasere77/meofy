#pragma once

#include "Libs.hpp"
#include <array>

#define nbColoneOnMap 91 // 83, 91
#define nbLigneOnMap 51 //47, 51
#define nbInstancesMaps nbLigneOnMap*nbColoneOnMap //map and cell instance
#define cellSize 20
#define bordeur 1 // 3, 1

/*
the map is a cell with a border
*/
class Cell {

    public:
        Cell();
        sf::RectangleShape cellShape;//shape for map and cell
        void init();
        void activateCell();
        int getXCell();
        int getYCell();

    private:
        sf::Color color = sf::Color(40, 40, 40);
        bool alive = false;
        int xCell;
        int yCell;
        int xMap; // add border 
        int yMap; //add border

};