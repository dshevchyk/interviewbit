////
//  ReverseBits.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "ReverseBits.hpp"

unsigned int Solution::reverse(unsigned int A) {
    constexpr unsigned int bitsInByte = 8;
    
    int bits = sizeof(int) * bitsInByte;
    int res = 0;
    
    while (bits) {
        res <<= 1;
        res += A & 1;
        A >>= 1;;
        --bits;
    }
    
    return res;
}
