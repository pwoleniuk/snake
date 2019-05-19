//
// Created by pawel on 19.05.19.
//

#include "Snake.h"
Snake::Snake(Board &board):board(board) {
partOfSnake sample;
sample.y=board.getHeight()/2;
for(int i=0;i<widthSnake;++i)
{
    sample.x=board.getWidth()/2-i;
    SnakeBody.push_back(sample);
}
}
void Snake::setSide(Side newSide) {
    SideOfSnake=newSide;
}
Side Snake::getSide() const {
    return SideOfSnake;
}
void Snake::goSnake() {
    for(int i=widthSnake-1;i>0;--i)
    {
        SnakeBody[i].x=SnakeBody[i-1].x;
        SnakeBody[i].y=SnakeBody[i-1].y;
    }
    switch (SideOfSnake)
    {
        case Right :
        {
            SnakeBody[0].x=SnakeBody[1].x+1;
            SnakeBody[0].y=SnakeBody[1].y;
        }
            break;
        case Left :
        {
            SnakeBody[0].x=SnakeBody[1].x-1;
            SnakeBody[0].y=SnakeBody[1].y;
        }
            break;
        case Up :
        {
            SnakeBody[0].x=SnakeBody[1].x;
            SnakeBody[0].y=SnakeBody[1].y-1;
        }
            break;
        case Down :
        {
            SnakeBody[0].x=SnakeBody[1].x;
            SnakeBody[0].y=SnakeBody[1].y+1;
        }
    }
}
