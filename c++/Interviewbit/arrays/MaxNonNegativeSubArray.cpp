//
//  MaxNonNegativeSubArray.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MaxNonNegativeSubArray.hpp"

vector<int> Solution::maxset(vector<int> &A) {
    auto begin = A.begin();
    auto end = A.begin();
    long long sum = 0;
    auto currentBegin = A.begin();
    auto currentEnd = A.begin();
    long long currentSum = 0;
    for (auto it = A.begin(); it != A.end(); ++it) {
        if (*it < 0) {
            currentBegin = it + 1;
            currentEnd = currentBegin;
            currentSum = 0;
            continue;
        }
        currentSum += *it;
        currentEnd++;
        if (sum < currentSum ||
            (sum == currentSum &&
             distance(begin, end) < distance(currentBegin, currentEnd))) {
                sum = currentSum;
                begin = currentBegin;
                end = currentEnd;
            }
    }
    return vector<int>(begin, end);
}
