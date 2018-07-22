//
//  MergeOverlappingIntervals.cpp
//  Interviewbit
//
//  Created by Димаська on 22.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MergeOverlappingIntervals.hpp"

vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    res.reserve(A.size());
    sort(A.begin(), A.end(), [](const Interval& a, const Interval& b) {
        return a.start == b.start ? a.end < b.end : a.start < b.start;
    });
    auto it = A.begin();
    while (it != A.end()) {
        auto startIt = it++;
        int maxEnd = startIt->end;
        while (it != A.end() && it->start <= maxEnd) {
            maxEnd = std::max(maxEnd, (it++)->end);
        }
        res.emplace_back(startIt->start, maxEnd);
    }
    return res;
}
