//
//  MaxSumContiguousSubarray.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MaxSumContiguousSubarray.hpp"
#include <limits>

int Solution::maxSubArray(const vector<int> &A) {
    if (A.empty()) return 0;
    int currentSum = 0;
    int maxSum = std::numeric_limits<int>::min();
    for (int a : A) {
        currentSum += a;
        maxSum = std::max(currentSum, maxSum);
        if (currentSum < 0) currentSum = 0;
    }
    return maxSum;
}
