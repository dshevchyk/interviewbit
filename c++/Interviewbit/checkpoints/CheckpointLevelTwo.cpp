//
//  CheckpointLevelTwo.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 23.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "CheckpointLevelTwo.hpp"
vector<vector<int> > Solution::prettyPrint(int A) {
    int n = A * 2 - 1;
    vector<vector<int> > res(n, vector<int>(n, 1));
    for (int i = 0; i < A; ++i) {
        for (int j = i; j < n - i; ++j) {
            res[i][j] = A - i;
            res[n - i - 1][j] = A - i;
        }
    }
    for (int j = 0; j < A; ++j) {
        for (int i = j + 1; i < n - j - 1; ++i) {
            res[i][j] = A - j;
            res[i][n - j -1] = A - j;
        }
    }
    return res;
}
