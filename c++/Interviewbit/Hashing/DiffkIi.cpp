////
//  DiffkIi.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "DiffkIi.hpp"
#include <unordered_set>

using std::unordered_set;

int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_set<int> cache;
    for (auto ai : A) {
        auto it = cache.find(ai + B);
        
        if (it != cache.end()) {
            return 1;
        }
        
        it = cache.find(ai - B);
        if (it != cache.end()) {
            return 1;
        }
        
        cache.insert(ai);
    }
    return 0;
}
