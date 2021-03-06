//
//  MaximumUnsortedSubarray.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 22.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MaximumUnsortedSubarray.hpp"
#include <limits>

using std::numeric_limits;
using std::min;
using std::max;

vector<int> Solution::subUnsort(vector<int> &A) {
    int minVal = numeric_limits<int>::max();
    int maxVal = numeric_limits<int>::min();
    bool flag = false;
    for (int i = 1; i < A.size(); i++) {
        if (A[i] < A[i - 1])
            flag = true;
        if (flag)
            minVal = min(minVal, A[i]);
    }
    flag = false;
    for (int i = static_cast<int>(A.size()) - 2; i >= 0; i--) {
        if (A[i] > A[i + 1])
            flag = true;
        if (flag)
            maxVal = max(maxVal, A[i]);
    }
    int l, r;
    for (l = 0; l < A.size(); l++) {
        if (minVal < A[l])
            break;
    }
    for (r = static_cast<int>(A.size()) - 1; r >= 0; r--) {
        if (maxVal > A[r])
            break;
    }
    return r - l > 0 ? vector<int>{l,r} : vector<int>{-1};
}
