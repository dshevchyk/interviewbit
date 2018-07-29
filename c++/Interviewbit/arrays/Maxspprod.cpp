//
//  Maxspprod.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "Maxspprod.hpp"

#include <stack>
#include <algorithm>

using std::stack;
using std::max;

int Solution::maxSpecialProduct(vector<int> &A) {
    static constexpr long MOD = 1000000007;
    auto n = A.size();
    stack<int> index;
    int left[n];
    int right[n];
    for (int i = 0; i < n; ++i) {
        while (!index.empty() && A[index.top()] <= A[i]) {
            index.pop();
        }
        if (!index.empty()) {
            left[i] = index.top();
        } else {
            left[i] = 0;
        }
        index.push(i);
    }
    index = stack<int>();
    for (int i = static_cast<int>(n) - 1; i >= 0; --i) {
        while (!index.empty() && A[index.top()] <= A[i]) {
            index.pop();
        }
        if (!index.empty()) {
            right[i] = index.top();
        } else {
            right[i] = 0;
        }
        index.push(i);
    }
    long maxProd = -1;
    for (int i = 0; i < n; ++i) {
        maxProd = max(maxProd, ((long)left[i]*(long)right[i])) % MOD;
    }
    return static_cast<int>(maxProd);
}
