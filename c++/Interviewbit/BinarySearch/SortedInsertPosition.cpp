//
//  SortedInsertPosition.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SortedInsertPosition.hpp"

int Solution::searchInsert(vector<int> &A, int B) {
    auto begin = A.begin();
    auto end = A.end();
    while (distance(begin, end) > 0) {
        auto mid = begin + (end - begin) / 2;
        if(*mid == B) {
            return static_cast<int>(distance(A.begin(), mid));
        } else if (*mid < B) {
            begin = mid + 1;
        } else {
            end = mid;
        }
    }
    return static_cast<int>(distance(A.begin(), begin));
}
