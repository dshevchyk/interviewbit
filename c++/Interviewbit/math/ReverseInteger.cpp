//
//  ReverseInteger.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ReverseInteger.hpp"
#include <limits>
#include <algorithm>

using std::numeric_limits;
using std::abs;

int Solution::reverse(int A) {
    static constexpr int numericSystem = 10;
    int res = 0;
    int sign = A > 0 ? 1 : -1;
    A = abs(A);
    int maxVal = numeric_limits<int>::max() / numericSystem;
    while (A) {
        if (res > maxVal) return 0;
        res *= numericSystem;
        int nextNumb = A % numericSystem;
        if (res > numeric_limits<int>::max() - nextNumb) return 0;
        res += nextNumb;
        A /= numericSystem;
    }
    return sign * res;
}
