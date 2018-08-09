//
//  MergeTwoSortedListsII.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MergeTwoSortedListsII.hpp"

void Solution::merge(vector<int> &A, vector<int> &B) {
    if (A.empty()) {
        A = B;
        return;
    }
    if (B.empty()) {
        return;
    }
    const auto m = A.size();
    const auto n = B.size();
    auto a = m - 1;
    auto b = n - 1;
    auto i = m + n - 1;
    A.resize(m + n);
    while (a < m && b < n) {
        if (A[a] > B[b]) {
            A[i--] = A[a--];
        }
        else {
            A[i--] = B[b--];
        }
    }
    while ( b < n) {
        A[i--] = B[b--];
    }
}
