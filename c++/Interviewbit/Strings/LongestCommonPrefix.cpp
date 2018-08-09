//
//  LongestCommonPrefix.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 04.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "LongestCommonPrefix.hpp"

string Solution::longestCommonPrefix(vector<string> &A) {
    if (A.empty()) return string();
    const auto maxlength = A.front().size();
    for (int i = 0; i < maxlength; ++i) {
        for (int j = 1; j < A.size(); ++j) {
            if (A[j].size() < i + 1 || A[j][i] != A.front()[i]) {
                return string(A.front().begin(), A.front().begin() + i);
            }
        }
    }
    return A.front();
}
