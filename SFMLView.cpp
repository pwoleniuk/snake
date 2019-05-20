//
// Created by pawel on 19.05.19.
//

#include "SFMLView.h"
#include <iostream>
using namespace std;
SFMLView::SFMLView(Board &board, Snake &snake):board(board),snake(snake) {
    position.x=180.f;
    position.y=80.f;
}
void SFMLView::draw(sf::RenderWindow &win) {
    sizeField=(win.getSize().x-position.x*2)/board.getWidth();
    sf::Texture backg;
    backg.loadFromFile("../img/grass.jpeg");
    sf::Sprite background;
    background.setTexture(backg);
    sf::Texture dirt;
    dirt.loadFromFile("../img/dirt.png");
    sf::Sprite dirts;
    dirts.setTexture(dirt);
    sf::Texture wall;
    wall.loadFromFile("../img/wall.png");
    sf::Sprite walls;
    walls.setTexture(wall);
    for(int line=0;line<win.getSize().y;line=line+20)
    {
        for(int col=0;col<win.getSize().x;col=col+20)
        {
            background.setPosition(col,line);
            win.draw(background);
        }
    }
    for(int line=0;line<board.getHeight();++line)
    {
        for(int col=0;col<board.getWidth();++col)
        {
            if(!board.isWall(col,line))
            {
                dirts.setPosition(position.x+col*sizeField,position.y+line*sizeField);
                win.draw(dirts);
            }
            else
                {
                walls.setPosition(position.x+col*sizeField,position.y+line*sizeField);
                win.draw(walls);

                }

        }
    }


}