//
//  AntiDiagonals.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "AntiDiagonals.hpp"

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    auto n = A.size();
    vector<vector<int> > res;
    for (int j = 0; j < n; ++j) {
        int i = 0;
        int k = j;
        vector<int> diagonal(j + 1, 0);
        while (k > -1) {
            diagonal[i]=A[i][k];
            --k;
            ++i;
        }
        res.push_back(diagonal);
    }
    for (int i = 1; i < n; ++i) {
        int j = static_cast<int>(n) - 1;
        int k = i;
        vector<int> diagonal(n - i, 0);
        while (k < n) {
            diagonal[k - i]=A[k][j];
            ++k;
            --j;
        }
        res.push_back(diagonal);
    }
    return res;
}
