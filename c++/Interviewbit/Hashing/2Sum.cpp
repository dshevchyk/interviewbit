////
//  2Sum.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "2Sum.hpp"
#include <unordered_map>

using std::unordered_map;
using std::make_pair;

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int, int> cache;
    vector<int> bestAns;
    
    for (int i = 0; i < A.size(); ++i) {
        auto it = cache.find(B - A[i]);
        if (it != cache.end()) {
            int index1 = it->second + 1;
            int index2 = i + 1;
            if (bestAns.empty() || bestAns.back() > index2 ||
                (bestAns.back() == index2 &&  index1 < bestAns.front())) {
                bestAns = { index1, index2 };
            }
        } else {
            cache.insert(make_pair(A[i], i));
        }
    }
    return bestAns;
}
