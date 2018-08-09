//
//  AllocateBooks.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "AllocateBooks.hpp"
#include <limits>
#include <algorithm>
#include <numeric>

using std::numeric_limits;
using std::max_element;
using std::accumulate;
using std::min;

namespace {
    
bool isPossible(long long mid, vector<int> A, int students){
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < A.size(); ++i) {
        sum += A[i];
        if (sum > mid) {
            ++count;
            sum = 0;
            --i;
        }
    }
    if (count < students) {
        return true;
    }
    return false;
}
    
}

int Solution::books(vector<int> &A, int B) {
    if (A.empty()) return 0;
    if (A.size() < B) return -1;
    
    auto maxBookSize = max_element(A.begin(), A.end());
    long long pages = accumulate(A.begin(), A.end(), 0);
    long long minAns = 0;
    long long maxAns = pages;
    long long bestAns = numeric_limits<long long>::max();
    while (minAns <= maxAns) {
        auto mid = (minAns + maxAns) / 2;
        bool possible = *maxBookSize <= mid && isPossible(mid, A, B);
        if (possible) {
            bestAns = min(mid, bestAns);
            maxAns = mid - 1;
        } else {
            minAns = mid + 1;
        }
    }
    return static_cast<int>(bestAns);
}
