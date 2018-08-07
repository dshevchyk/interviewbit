//
//  IntersectionOfSortedArrays.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "IntersectionOfSortedArrays.hpp"
#include <algorithm>

using std::max;

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> result;
    result.reserve(max(A.size(), B.size()));
    auto aIt = A.begin();
    auto bIt = B.begin(); {
        while (aIt != A.end() && bIt != B.end()) {
            if (*aIt == *bIt) {
                result.push_back(*aIt);
                aIt++;
                bIt++;
            } else if (*aIt > *bIt) {
                bIt++;
            } else {
                aIt++;
            }
        }
    }
    return result;
}
