//
//  RotatedSortedArraySearch.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "RotatedSortedArraySearch.hpp"

vector<int>::const_iterator findMinimun(vector<int>::const_iterator begin,
                                        vector<int>::const_iterator end) {
    while (distance(begin, end) > 1) {
        auto mid = begin + distance(begin, end) / 2;
        if (*mid >= *(end - 1)) {
            begin = mid + 1;
        } else {
            end = mid + 1;
        }
    }
    return begin;
}

vector<int>::const_iterator binarySearch(vector<int>::const_iterator begin,
                                         vector<int>::const_iterator end,
                                         int target) {
    auto endCopy = end;
    while (begin != end) {
        auto mid = begin + distance(begin, end) / 2;
        if (*mid == target) {
            return mid;
        } else if (*mid > target) {
            end = mid;
        } else {
            begin = mid + 1;
        }
    }
    return endCopy;
}

int Solution::search(const vector<int> &A, int B) {
    auto minIt = findMinimun(A.begin(), A.end());
    auto resIt = binarySearch(A.begin(), minIt, B);
    if (resIt == minIt) {
        resIt =  binarySearch(minIt, A.end(), B);
    }
    return resIt == A.end() ? -1 : static_cast<int>(distance(A.begin(), resIt));
}
