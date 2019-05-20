//
// Created by pawel on 19.05.19.
//

#ifndef SFMLAPP_SFMLVIEW_H
#define SFMLAPP_SFMLVIEW_H

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Snake.h"

class SFMLView {
Board &board;
Snake &snake;
float sizeField;
sf::Vector2f position;
public:
    SFMLView(Board &board, Snake &snake);
    void draw(sf::RenderWindow &win);

};


#endif //SFMLAPP_SFMLVIEW_H
