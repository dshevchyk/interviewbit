////
//  NumberOf1Bits.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "NumberOf1Bits.hpp"

int Solution::numSetBits(unsigned int A) {
    int sol = 0;
    
    while (A) {
        sol += A & 1;
        A >>= 1;
    }
    
    return sol;
}
