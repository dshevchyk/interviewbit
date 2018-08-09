//
//  Atoi.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 04.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "Atoi.hpp"
#include <limits>

using std::numeric_limits;

bool isValid(char c) {
    return c >= '0' && c <= '9';
}

int Solution::atoi(const string A) {
    auto current = A.begin();
    while (current != A.end() && *current == ' ') ++ current;
    if (current == A.end()) return 0;
    int sign = 1;
    if (*current == '+' || *current == '-') {
        sign = *current == '-' ? -1 : 1;
        ++current;
    }
    int res = 0;
    int overflowValue = numeric_limits<int>::max() / 10;
    while(current != A.end() && isValid(*current)) {
        if (res >= overflowValue) {
            return sign == 1 ? numeric_limits<int>::max() : numeric_limits<int>::min();
        }
        res *= 10;
        res += *(current++) - '0';
    }
    return res * sign;
}
