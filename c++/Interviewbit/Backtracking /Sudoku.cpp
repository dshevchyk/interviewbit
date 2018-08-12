////
//  Sudoku.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "Sudoku.hpp"

static constexpr int CELL_ROW_SIZE = 3;
static constexpr int SIZE = CELL_ROW_SIZE * CELL_ROW_SIZE;
static constexpr char SIZE_C = SIZE + '0';

namespace {
    
bool check(vector<vector<char>> &A, int i, int j, char val)
{
    int row = i - i % CELL_ROW_SIZE;
    int column = j - j % CELL_ROW_SIZE;
    for (int x = 0; x < SIZE; ++x) {
        if (A[x][j] == val) {
            return false;
        }
    }
    for (int y = 0; y < SIZE; ++y) {
        if (A[i][y] == val) {
            return false;
        }
    }
    for(int x = 0; x < CELL_ROW_SIZE; ++x) {
        for (int y = 0; y < CELL_ROW_SIZE; ++y) {
            if (A[row + x][column + y] == val) {
                return false;
            }
        }
    }
    return true;
}

bool helper(vector<vector<char>> &A, int i, int j) {
    if (i == SIZE) {
        return true;
    }
    if (j == SIZE) {
        return helper(A, i + 1, 0);
    }
    if (A[i][j] != '.') {
        return helper(A, i, j + 1);
    }
    
    for (char c = '1'; c <= SIZE_C; ++c) {
        if (check(A, i, j, c)) {
            A[i][j] = c;
            if (helper(A, i, j + 1)) {
                return true;
            }
            A[i][j] = '.';
        }
    }
    
    return false;
}

}

void Solution::solveSudoku(vector<vector<char> > &A) {
    helper(A, 0, 0);
}
