////
//  GrayCode.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "GrayCode.hpp"
#include <bitset>

using std::vector;
using std::bitset;

namespace  {
    
static constexpr int BITS_IN_BYTE = 8;
static constexpr int BITS_IN_INT = BITS_IN_BYTE * sizeof(int);

void helper(bitset<BITS_IN_INT> &bits, vector<int> &result, int k) {
    if (k == 0) {
        result.push_back(static_cast<int>(bits.to_ulong()));
    } else {
        int nextK = k - 1;
        helper(bits, result, nextK);
        bits.flip(nextK);
        helper(bits, result, nextK);
    }
}

}

vector<int> Solution::grayCode(int A) {
    bitset<BITS_IN_INT> bits;
    vector<int> result;
    helper(bits, result, A);
    return result;
}
