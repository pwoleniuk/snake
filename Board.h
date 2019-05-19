//
// Created by pawel on 19.05.19.
//

#ifndef SFMLAPP_BOARD_H
#define SFMLAPP_BOARD_H

struct field{
    bool hascherry=0;
    bool iswall=0;
};
class Board {
    field board[50][50];
    int height;
    int width;
public:
    Board(int height, int width);
    void debugdisplay()const;
    int getHeight()const;
    int getWidth()const;
    bool hasCherry(int x, int y)const;
    bool isWall(int x, int y)const;
    void setCherry(int x, int y);

};


#endif //SFMLAPP_BOARD_H
