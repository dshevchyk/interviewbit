//
//  MultiplyStrings.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MultiplyStrings.hpp"

namespace {
    
int toInt(char c) {
    return static_cast<int>(c - '0');
}

char toChar(int i) {
    return static_cast<char>(i + '0');
}

}

string Solution::multiply(string A, string B) {
    string sum(A.size() + B.size(), '0');
    for (auto aIt = A.rbegin(); aIt != A.rend(); ++aIt) {
        int carry = 0;
        auto i = distance(aIt, A.rend()) - 1;
        for (auto bIt = B.rbegin(); bIt != B.rend(); ++bIt) {
            auto j = distance(bIt, B.rend()) - 1;
            int tmp = toInt(sum[i + j + 1]) + toInt(*aIt) * toInt(*bIt) + carry;
            sum[i + j + 1] = toChar(tmp % 10);
            carry = tmp / 10;
        }
        sum[i] += carry;
    }
    const string zero = "0";
    size_t startpos = sum.find_first_not_of(zero);
    if (string::npos != startpos) {
        return sum.substr(startpos);
    }
    return zero;
}
