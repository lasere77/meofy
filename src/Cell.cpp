#include "../include/Cell.hpp"
#include <iostream>

Cell::Cell() {
    std::cout << "map was creat" << std::endl;
    cellShape.setFillColor(color);
}

int globalId = 0;
int nbligne = 0;

void Cell::init() {
    xMap = (cellSize + bordeur) * globalId;
    yMap = (cellSize + bordeur) * nbligne; 
    xCell = cellSize * globalId;
    yCell = cellSize * nbligne; 

    if(globalId % nbColoneOnMap == 0 && globalId != 0) { 
        nbligne++;
        globalId -= nbColoneOnMap; //ligne 
        xMap = (cellSize + bordeur) * globalId;
        yMap = (cellSize + bordeur) * nbligne;
        xCell = cellSize * globalId;
        yCell = cellSize * nbligne;
    }
    cellShape.setPosition(xMap, yMap);
    cellShape.setSize(sf::Vector2f(cellSize, cellSize));
    cellShape.setFillColor(sf::Color(40, 40, 40));
    globalId++;
}


void Cell::activateCell() {
    color = sf::Color(200, 50 ,50);
    cellShape.setFillColor(color);
    alive = true;
}

int Cell::getXCell() {
    return xCell;
}
int Cell::getYCell() {
    return yCell;
}