//
//  ContainerWithMostWater.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ContainerWithMostWater.hpp"
#include <algorithm>

using std::min;

int Solution::maxArea(vector<int> &A) {
    int i = 0;
    auto j = A.size() - 1;
    int bestAnswer = 0;
    while(i < j) {
        auto width = j - i;
        auto height = min(A[i], A[j]);
        auto candidate = width * height;
        if (bestAnswer < candidate) {
            bestAnswer = static_cast<int>(candidate);
        }
        if (A[i] < A[j]) {
            ++i;
        } else {
            --j;
        }
    }
    return bestAnswer;
}
