//
//  MinimizeTheAbsoluteDifference.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MinimizeTheAbsoluteDifference.hpp"
#include <limits>
#include <algorithm>

using std::numeric_limits;
using std::max;
using std::min;

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i = 0;
    int j = 0;
    int k = 0;
    int bestAns = numeric_limits<int>::max();
    while (i < A.size() && j < B.size() && k < C.size()) {
        auto maxEl = max(A[i], max(B[j], C[k]));
        auto minEl = min(A[i], min(B[j], C[k]));
        auto ans = abs(maxEl - minEl);
        if(ans < bestAns) {
            bestAns = ans;
        }
        if (A[i] == minEl) {
            ++i;
        } else if(B[j] == minEl) {
            ++j;
        } else {
            ++k;
        }
    }
    return bestAns;
}
