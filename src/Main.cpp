#include <iostream>
#include "../include/Libs.hpp"
#include "../include/Map.hpp"
#include <array>

int main() {
  sf::RenderWindow window(sf::VideoMode(200, 200), "game of life", sf::Style::Fullscreen);
  window.setFramerateLimit(60);

  std::array<Map, nbInstancesMaps> maps;
  for(int i = 0; i != maps.size(); i++) {
    maps.at(i).init();
  }

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

    for(int i = 0; i != maps.size(); i++) {
      window.draw(maps.at(i).mapShape);

    }
    window.display();
  }

  return 0;
}
