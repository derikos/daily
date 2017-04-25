#include "purerandom.h"

PureRandom::PureRandom(int columnSize,int rowSize) :
    magicNumber(42),
    realisticNumber(magicNumber),
    m_columnSize(columnSize),
    m_rowSize(rowSize)
{
    std::cout<<"Constructor doing its thing. magicNumber = "<<magicNumber
            <<"; realisticNumber = "<<realisticNumber<<std::endl;
    if (columnSize < MAX_SIZE && rowSize < MAX_SIZE) {
        for (int i = 0;i < columnSize;i++)
        {
            for (int j = 0;j < rowSize;j++)
            {
                board[i][j] = '*';
            }
        }
    }
}

void PureRandom::printBoard()
{
    for (int i = 0;i < m_columnSize;i++)
    {
        for (int j = 0;j < m_rowSize;j++)
        {
            std::cout<<board[i][j];
        }
        std::cout<<std::endl;

    }
}
