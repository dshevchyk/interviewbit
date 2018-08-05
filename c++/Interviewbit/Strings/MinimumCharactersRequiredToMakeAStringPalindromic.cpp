//
//  MinimumCharactersRequiredToMakeAStringPalindromic.cpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MinimumCharactersRequiredToMakeAStringPalindromic.hpp"

#include <vector>

namespace {
    
using std::vector;
    
vector<int> kmpProcess(const string& A) {
    const auto n = A.size();
    vector<int> kmp(n, 0);
    int len = 0, i = 1;
    while (i < n) {
        if (A[i] == A[len]) {
            kmp[i++] = ++len;
        } else if (len) {
            len = kmp[len -1];
        } else {
            i++;
        }
    }
    return kmp;
}
    
}

int Solution::solve(string A) {
    const auto n = A.size();
    string reverseA(A);
    reverse(reverseA.begin(), reverseA.end());
    A += "#" + reverseA;
    const auto kmp = kmpProcess(A);
    return static_cast<int>(n - kmp[A.size() - 1]);
}
