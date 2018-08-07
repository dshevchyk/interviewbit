//
//  3Sum.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "3Sum.hpp"
#include <limits>

using std::numeric_limits;

int Solution::threeSumClosest(vector<int> &A, int B) {
    const auto n = A.size();
    sort(A.begin(), A.end());
    int diff = numeric_limits<int>::max();
    for (int i = 0; i < n; ++i){
        auto j = i + 1;
        auto k = n - 1;
        while (k > j) {
            int sum = A[i] + A[j] + A[k];
            if (sum == B) {
                return B;
            }
            if (abs(sum - B) < abs(diff)) {
                diff = sum - B;
            }
            if (sum > B) {
                --k;
            }
            else {
                ++j;
            }
        }
    }
    return diff + B;
}
