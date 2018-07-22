//
//  MergeOverlappingIntervals.hpp
//  Interviewbit
//
//  Created by Димаська on 22.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef MergeOverlappingIntervals_hpp
#define MergeOverlappingIntervals_hpp

#include <vector>

using std::vector;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
    vector<Interval> merge(vector<Interval> &A);
};

#endif /* MergeOverlappingIntervals_hpp */
