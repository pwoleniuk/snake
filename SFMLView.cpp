//
// Created by pawel on 19.05.19.
//

#include "SFMLView.h"
SFMLView::SFMLView(Board board, Snake snake):board(board),snake(snake) {
    position.x=180.f;
    position.y=80.f;
}
void SFMLView::draw(sf::RenderWindow &win) {
    sizeField=(win.getSize().x-position.x*2)/board.getWidth();
    /*sf::Texture backg;
    backg.loadFromFile("background.jpg");
    sf::Sprite background;
    background.setTexture(backg);
    win.draw(background);*/
    sf::Texture dirt;
    dirt.loadFromFile("dirt.png");
    sf::Sprite dirts;
    dirts.setTexture(dirt);
    for(int line=0;line<board.getHeight();++line)
    {
        for(int col=0;col<board.getWidth();++col)
        {
            dirts.setPosition(position.x+col*sizeField,position.y+line*sizeField);
            win.draw(dirts);
        }
}
}