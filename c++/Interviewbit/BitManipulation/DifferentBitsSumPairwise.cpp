////
//  DifferentBitsSumPairwise.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "DifferentBitsSumPairwise.hpp"
int Solution::cntBits(vector<int> &A) {
    static constexpr int mod = 1000000007;
    long long ans = 0;
    
    for (int i = 0; i < 31; i++) {
        int count = 0;
        for (int j = 0; j < A.size(); j++) {
            if (A[j] & (1 << i)) {
                count++;
            }
        }
        ans += 2 * count * (A.size() - count);
        ans %= mod;
    }
    
    return static_cast<int>(ans);
}
