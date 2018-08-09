//
//  LargestNumber.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 23.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "LargestNumber.hpp"

using std::to_string;

string Solution::largestNumber(const vector<int> &A) {
    auto comperator = [](const int &a, const int &b) {
        auto aStr = to_string(a);
        auto bStr = to_string(b);
        auto ab = aStr + bStr;
        auto ba = bStr + aStr;
        return ab > ba;
    };
    auto ACopy = A;
    sort(ACopy.begin(), ACopy.end(), comperator);
    string res;
    for (auto ai : ACopy) {
        res += to_string(ai);
    }
    if (res[0] == '0') {
        return "0";
    }
    return res;
}
