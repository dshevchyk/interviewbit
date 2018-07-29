//
//  MaximumAbsoluteDifference.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MaximumAbsoluteDifference.hpp"
#include <limits>
#include <algorithm>

using std::numeric_limits;
using std::max;
using std::min;

int Solution::maxArr(vector<int> &A) {
    //|A[i] - A[j]| + |i - j| =
    //1) (A[i] + i) - (A[j] + j);
    //2) -(A[i] + i) + (A[j] + j);
    //3) (A[i] - i) - (A[j] - j);
    //4) -(A[i] - i) + (A[j] - j)
    long long maxPlus = numeric_limits<long long>::min();
    long long maxMinus = numeric_limits<long long>::min();
    
    long long minPlus = numeric_limits<long long>::max();
    long long minMinus = numeric_limits<long long>::max();
    for (int i = 0; i < A.size(); ++i) {
        long long sum = A[i] + i;
        long long minus = A[i] - i;
        maxPlus = max(maxPlus, sum);
        minPlus = min(minPlus, sum);
        maxMinus = max(maxMinus, minus);
        minMinus = min(minMinus, minus);
    }
    return static_cast<int>(max(maxPlus - minPlus, maxMinus - minMinus));
}
