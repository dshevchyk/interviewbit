//
//  TrailingZerosInFactorial.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 23.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "TrailingZerosInFactorial.hpp"

int Solution::trailingZeroes(int A) {
    int x = A;
    int sum = 0;
    for (int i = 5; x / i >= 1; i = i * 5){
        sum += x / i;
    }
    return sum;
}
