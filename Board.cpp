//
// Created by pawel on 19.05.19.
//

#include "Board.h"
#include <iostream>
using namespace std;
Board::Board(int height, int width) {
    this->height=height;
    this->width=width;
    for(int line=0;line<height;++line)
    {
        board[line][0].iswall=1;
        board[line][height-1].iswall=1;
    }
    for(int col=0;col<width;++col)
    {
        board[0][col].iswall=1;
        board[width-1][col].iswall=1;
    }

}

void Board::debugdisplay() const {
    for(int line=0;line<height;++line)
    {
        for(int col=0;col<width;++col)
        {
            if(board[line][col].iswall) cout<<"#";
            else cout<<" ";
        }

        cout<<endl;
    }

}
int Board::getHeight() const {
    return height;
}
int Board::getWidth() const {
    return width;
}
bool Board::hasCherry(int x, int y) const {
    if(board[y][x].hascherry) return true;
    else return false;
}
bool Board::isWall(int x, int y) const {
    if(board[y][x].iswall) return true;
    else return false;
}
void Board::setCherry(int x, int y) {
    board[y][x].hascherry=1;
}