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
using namespace std;

const int SIZE = 8;

bool vaildWay(int col, int row, int board[][SIZE]) {
    return (col >= 0 && col < SIZE && row >= 0
        && row < SIZE && !board[row][col]);
}

int main() {
    int board[SIZE][SIZE] = { 0 };
    int access[SIZE][SIZE] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  2, 3, 4, 4, 4, 4, 3, 2 };
    int horizontal[SIZE] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[SIZE] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int currentCol, currentRow;
    int testCol, testRow;
    int moveSteps = 0;
    srand(time(0));
    currentCol = rand() % 8;
    currentRow = rand() % 8;
    board[currentRow][currentCol] = ++moveSteps;
    bool done = false;

    while (!done) {
        int miniWay = 9;
        int direction = -1;
        for (int i = 0; i < SIZE; ++i) {
            testCol = currentCol + horizontal[i];
            testRow = currentRow + vertical[i];
            if (vaildWay(testCol, testRow, board)) {
                if (access[testRow][testCol] < miniWay) {
                    miniWay = access[testRow][testCol];
                    direction = i;
                }
                --access[testRow][testCol];
            }
        }

        if (direction == -1)
            done = true;
        else {
            currentCol += horizontal[direction];
            currentRow += vertical[direction];
            board[currentRow][currentCol] = ++moveSteps;
        }
    }

    if (moveSteps == 64)
        cout << "   successful!!\n\n";
    else
        cout << "   failed\n\n";

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            cout << setw(3) << board[i][j];
        cout << endl;
    }

    return 0;
}


