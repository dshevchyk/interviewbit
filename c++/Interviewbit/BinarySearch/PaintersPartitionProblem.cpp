//
//  PaintersPartitionProblem.cpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "PaintersPartitionProblem.hpp"
#include <limits>
#include <algorithm>
#include <numeric>

using std::numeric_limits;
using std::max_element;
using std::accumulate;
using std::min;

namespace {
    
bool isPossible(long long mid, vector<int> C, int painters){
    long long sum = 0;
    int count = 1;
    
    for(int i = 0; i < C.size(); ++i){
        if (sum + C[i] > mid) {
            count++;
            sum = 0;
            --i;
        }
        else {
            sum = sum + C[i];
        }
    }
    
    if (count <= painters) {
        return true;
    }
    
    return false;
}
    
}

int Solution::paint(int A, int B, vector<int> &C) {
    if (C.empty()) return 0;
    
    auto maxUnit = max_element(C.begin(), C.end());
    long long units = accumulate(C.begin(), C.end(), 0);
    long long minAns = 0;
    long long maxAns = units;
    long long bestAns = numeric_limits<int>::max();
    while (minAns <= maxAns) {
        auto mid = (minAns + maxAns) / 2;
        bool possible = *maxUnit <= mid && isPossible(mid, C, A);
        if (possible) {
            bestAns = min(mid, bestAns);
            maxAns = mid - 1;
        } else {
            minAns = mid + 1;
        }
    }
    return static_cast<int>((bestAns * B) % 10000003);
}
