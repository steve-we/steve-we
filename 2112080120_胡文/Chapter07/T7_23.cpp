/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

const int SIZE = 8;
const int MAXTIMES = 10000;

bool vaildWay(int col, int row, int board[][SIZE]) {
    return (col >= 0 && col < SIZE && row >= 0
        && row < SIZE && !board[row][col]);
}
//void memset(void s,int ch,size_t n)

int main() {
    int board[SIZE][SIZE] = { 0 };
    int horizontal[SIZE] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[SIZE] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int currentCol, currentRow;
    int testCol, testRow;
    int moveSteps = 0;
    int tryTimes = 0;
    int bestSteps = 0;
    srand(time(0));

    while (moveSteps != 64 && tryTimes < MAXTIMES) {
        ++tryTimes;

        memset(board, 0, sizeof(board));
        moveSteps = 0;
        currentCol = rand() % 8;
        currentRow = rand() % 8;
        board[currentRow][currentCol] = ++moveSteps;
        bool done = false;

        while (!done) {
            int direction = rand() % 8;
            testCol = currentCol + horizontal[direction];
            testRow = currentRow + vertical[direction];
            if (!vaildWay(testCol, testRow, board)) {
                for (int i = 1; i < SIZE; ++i) {
                    direction = (direction + 1) % SIZE;
                    testCol = currentCol + horizontal[direction];
                    testRow = currentRow + vertical[direction];
                    if (vaildWay(testCol, testRow, board))
                        break;
                }
            }
            if (vaildWay(testCol, testRow, board)) {
                currentCol = testCol;
                currentRow = testRow;
                board[currentRow][currentCol] = ++moveSteps;
            }
            else
                done = true;
        }
        if (moveSteps > bestSteps)
            bestSteps = moveSteps;
    }

    if (moveSteps == 64) {
        cout << "After " << tryTimes << " times, successful!!\n\n";
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j)
                cout << setw(3) << board[i][j];
            cout << endl;
        }
    }
    else
        cout << "After " << tryTimes
        << " times, failed!!\nThe maximum number of step is "
        << bestSteps << ".\n\n";

    return 0;
}
