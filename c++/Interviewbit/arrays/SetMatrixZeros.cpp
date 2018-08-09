//
//  SetMatrixZeros.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 22.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SetMatrixZeros.hpp"

void Solution::setZeroes(vector<vector<int>>& A) {
    if (A.empty() || A.front().empty()) return;
    auto n = A.size();
    auto m = A.front().size();
    bool setZeroFrontRow = false;
    bool setZeroFrontCol = false;
    for (unsigned int i = 0; i < n; ++i) {
        if (A[i][0] == 0) {
            setZeroFrontCol = true;
            break;
        }
    }
    for (unsigned int j = 0; j < m; ++j) {
        if (A[0][j] == 0) {
            setZeroFrontRow = true;
            break;
        }
    }

    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < m; ++j) {
            if(A[i][j] == 0) {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < n; ++i) {
        if (A[i][0] == 0) {
            for (int j = 1; j < m; ++j) {
                A[i][j] = 0;
            }
        }
    }
    for (int j = 1; j < m; ++j) {
        if (A[0][j] == 0) {
            for (int i = 1; i < n; ++i) {
                A[i][j] = 0;
            }
        }
    }
    if (setZeroFrontCol) {
        for (int i = 0; i < n; ++i) {
            A[i][0] = 0;
        }
    }
    if (setZeroFrontRow) {
        for (int j = 0; j < m; ++j) {
            A[0][j] = 0;
        }
    }
}
