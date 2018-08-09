//
//  MergeIntervals.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef MergeIntervals_hpp
#define MergeIntervals_hpp

#include "Interval.h"
#include <vector>

using std::vector;

class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval);
};

#endif /* MergeIntervals_hpp */
