//
//  MinXORvalue.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MinXORvalue.hpp"
#include <limits>

using std::numeric_limits;
using std::min;

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int minXor = numeric_limits<int>::max();
    for (int i = 0; i < A.size() - 1; i++) {
        int val = A[i] ^ A[i + 1];
        minXor = min(minXor, val);
    }
    
    return minXor;
}
