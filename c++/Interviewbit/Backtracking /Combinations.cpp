////
//  Combinations.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "Combinations.hpp"

namespace {
    
void combineInternal(int A,
                     int B,
                     int lastUsedNumb,
                     vector<int> &current,
                     vector<int>::iterator currentIt,
                     vector<vector<int>> &res) {
    if (distance(current.begin(), currentIt) == B) {
        res.push_back(current);
        return;
    }
    auto numbsLeft = B - current.size();
    for (int i = lastUsedNumb; i < A - numbsLeft; ++i) {
        int nextNumb = i + 1;
        *(currentIt++) = nextNumb;
        combineInternal(A, B, nextNumb, current, currentIt, res);
        --currentIt;
    }
}
    
}

vector<vector<int> > Solution::combine(int A, int B) {
    if (B > A) {
        return {};
    }
    vector<vector<int>> res;
    vector<int> current(B, 0);
    
    combineInternal(A, B, 0, current, current.begin(), res);
    return res;
}
