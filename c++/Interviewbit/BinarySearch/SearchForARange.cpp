//
//  SearchForARange.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SearchForARange.hpp"
namespace {
    
template<class T>
T binarySearch(T begin,
               T end,
               int B,
               bool upper) {
    auto res = end;
    while (distance(begin, end) > 0) {
        auto mid = begin + (end - begin) / 2;
        if (*mid == B) {
            res = mid;
            if (upper) {
                begin = mid + 1;
            } else {
                end = mid;
            }
        }
        else if(*mid > B) {
            end = mid;
        }
        else {
            begin = mid + 1;
        }
    }
    return res;
}
    
template<class T>
int toInt(const vector<int> &A, T current) {
    if (current == A.end()) return -1;
    return static_cast<int>(distance(A.begin(), current));
}
    
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    auto lower = binarySearch(A.begin(), A.end(), B, false);
    auto upper = binarySearch(lower, A.end(), B, true);
    return vector<int>{toInt(A, lower), toInt(A, upper)};
}
