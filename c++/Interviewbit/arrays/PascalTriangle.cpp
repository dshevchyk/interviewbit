//
//  PascalTriangle.cpp
//  Interviewbit
//
//  Created by Димаська on 22.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "PascalTriangle.hpp"

vector<vector<int> > Solution::generate(int A){
    vector<vector<int>> res(A, {1});
    if (A < 2) return res;
    res[1].push_back(1);
    for (int i = 2; i < A; ++i) {
        res[i].reserve(i+1);
        for (int j = 1; j < i; ++j) {
            res[i].push_back(res[i-1][j-1] + res[i-1][j]);
        }
        res[i].push_back(1);
    }
    return res;
}
