//
//  PowerOfTwoIntegers.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 23.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "PowerOfTwoIntegers.hpp"
#include <cmath>

using std::sqrt;

int Solution::isPower(int A) {
    long long a;
    for (int i=1; i <= sqrt(A); ++i) {
        for (int j=2; j <= 32; ++j) {
            a=pow(i,j);
            if(a==A) {
                return true;
            }
            else if(a>A) {
                break;
            }
        }
    }
    return false;
}
