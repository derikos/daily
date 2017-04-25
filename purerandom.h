#ifndef PURERANDOM_H
#define PURERANDOM_H

#include <iostream>
#include <array>

const int MAX_SIZE = 6;

class PureRandom
{
public:
    PureRandom(int columnSize,int rowSize);


private :
    int magicNumber;
    int realisticNumber;
    int m_columnSize;
    int m_rowSize;

    char board[MAX_SIZE][MAX_SIZE];

public:

    void printBoard();
};

#endif // PURERANDOM_H
