////
//  SingleNumber.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "SingleNumber.hpp"

int Solution::singleNumber(const vector<int> &A) {
    if (A.empty()) {
        return 0;
    }
    
    int number = 0;
    for (auto ai : A) {
        number = number ^ ai;
    }
    
    return number;
}
