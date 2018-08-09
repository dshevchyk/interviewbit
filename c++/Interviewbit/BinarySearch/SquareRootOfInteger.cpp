//
//  SquareRootOfInteger.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SquareRootOfInteger.hpp"

#include <limits>
#include <algorithm>

using std::numeric_limits;
using std::max;

int Solution::sqrt(int A) {
    // if (A==0 || A==1) return A;
    // int start = 0, end = A;
    // int ans;
    // while(start<=end)
    // {
    //     int mid = start + (end - start)/2;
    //     if (mid <= A/mid)
    //     {
    //         start = mid + 1;
    //         ans = mid;
    //     }
    //     else
    //         end = mid - 1;
    // }
    // return ans;
    int start = 0;
    int end = A+1;
    int best = numeric_limits<int>::min();
    while (start < end) {
        int mid = start + (end - start) / 2;
        int candidate = mid * mid;
        if(candidate == A) return mid;
        if (candidate < A ) {
            best = max(best, candidate);
            start = mid+1;
        } else {
            end = mid;
        }
    }
    return best;
}
