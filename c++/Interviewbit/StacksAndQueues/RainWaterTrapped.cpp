////
//  RainWaterTrapped.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "RainWaterTrapped.hpp"
#include <algorithm>

using std::max;

int Solution::trap(const vector<int> &A) {
    int i = 0;
    int j = static_cast<int>(A.size()) - 1;
    int ans = 0;
    int left = 0;
    int right = 0;
    while (i <= j) {
        if (A[i] <= A[j]) {
            ans += max(0, left-A[i]);
            left = max(left,A[i]);
            ++i;
        }
        else {
            ans += max(0, right - A[j]);
            right = max(right, A[j]);
            --j;
        }
    }
    return ans;
}
