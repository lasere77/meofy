#include <iostream>
#include "../include/Libs.hpp"
#include "../include/Cell.hpp"
#include <array>

int activateCell(int ligne, int colone);
std::array<Cell, nbInstancesMaps> cells;

int main() {
  sf::RenderWindow window(sf::VideoMode(200, 200), "game of life", sf::Style::Fullscreen);
  window.setFramerateLimit(60);

  for(int i = 0; i != cells.size(); i++) {
    cells.at(i).init();
  }

  activateCell(9, 4); //0 was count 

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
        }
    }

    window.clear();

    for(int i = 0; i != cells.size(); i++) {
      window.draw(cells.at(i).cellShape);
    }
    window.display();
  }

  return 0;
}


int activateCell(int colone, int ligne) {
  int xLigne = colone * cellSize;
  int yColone = ligne * cellSize;
  std::cout << xLigne << " " << yColone << std::endl;  
  for(int i = 0; i != nbInstancesMaps; i++) {
      if(cells.at(i).getXCell() == xLigne && cells.at(i).getYCell() == yColone) {
        cells.at(i).activateCell();
        return 0;
      }
  }
  std::cout << "error... this is not in the range" << std::endl;
  return -1;
}