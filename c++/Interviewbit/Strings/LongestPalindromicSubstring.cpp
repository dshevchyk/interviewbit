//
//  LongestPalindromicSubstring.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 04.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "LongestPalindromicSubstring.hpp"

#include <algorithm>

using std::max;

namespace {
    int palindromSize(const string& A, int left, int right) {
        while (left >= 0 && right < A.size() && A[left] == A[right]) {
            ++right;
            --left;
        }
        return right - left - 1;
    }
}

string Solution::longestPalindrome(string A) {
    int begin  = 0;
    int end = 0;
    int maxlen = 0;
    for (int  i = 0; i < A.size(); ++i) {
        int len1 = palindromSize(A, i, i);
        int len2 = palindromSize(A, i, i + 1);
        int len = max(len1, len2);
        if (len > maxlen) {
            begin = i - (len -1) / 2;
            end = i + len / 2;
            maxlen = len;
        }
    }
    return string(A.begin()+ begin, A.begin() + end+1);
}
