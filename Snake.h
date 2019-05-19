//
// Created by pawel on 19.05.19.
//

#ifndef SFMLAPP_SNAKE_H
#define SFMLAPP_SNAKE_H
#include <vector>
#include "Board.h"
using namespace std;
struct partOfSnake{
    int x;
    int y;
};
enum StatusGame {Running, Win, Lost};
enum Side {Up, Right, Down, Left};
class Snake {
    vector<partOfSnake> SnakeBody;
    Board &board;
    Side SideOfSnake=Right;
    StatusGame status=Running;
    int widthSnake=3;
public:
    Snake(Board &board);
    void goSnake();
    void setSide(Side newSide);
    Side getSide()const;

};


#endif //SFMLAPP_SNAKE_H
