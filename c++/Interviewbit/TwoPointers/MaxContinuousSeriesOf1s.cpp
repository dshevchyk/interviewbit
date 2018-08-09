//
//  MaxContinuousSeriesOf1s.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MaxContinuousSeriesOf1s.hpp"
#include <algorithm>

using std::max;

vector<int> Solution::maxone(vector<int> &A, int B) {
    int start = 0;
    int end = 0;
    int beststart = 0;
    int bestend = 0;
    int swaps = 0;
    
    while (end < A.size()) {
        if (A[end] == 1) {
            ++end;
        } else if (swaps < B) {
            ++swaps;
            ++end;
        } else {
            if(bestend - beststart < end - start) {
                beststart = start;
                bestend = end;
            }
            if (A[start++] == 0) {
                --swaps;
            }
            swaps = max(swaps, 0);
            end = max(start, end);
        }
    }
    if(bestend - beststart < end - start) {
        beststart = start;
        bestend = end;
    }
    vector<int> res(bestend - beststart);
    int n=beststart;
    generate(res.begin(), res.end(), [&n] { return n++;});
    return res;
}
