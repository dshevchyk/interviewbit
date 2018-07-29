//
//  MergeIntervals.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MergeIntervals.hpp"
#include <algorithm>

using std::min;
using std::max;
#ifdef SOLUTION_WITH_SORT
void mergeOverlapping(vector<Interval> &A, bool sorted = false) {
    if (!sorted) {
        sort(A.begin(), A.end(), [](const Interval& a, const Interval& b) {
            return a.start == b.start ? a.end < b.end : a.start < b.start;
        });
    }
    auto it = A.begin();
    auto ACurrent = A.begin();
    while (it != A.end()) {
        auto startIt = it++;
        int maxEnd = startIt->end;
        while (it != A.end() && it->start <= maxEnd) {
            maxEnd = std::max(maxEnd, (it++)->end);
        }
        *(ACurrent++) = Interval(startIt->start, maxEnd);
    }
    A.resize(distance(A.begin(), ACurrent));
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    intervals.push_back(newInterval);
    mergeOverlapping(intervals);
    return intervals;
}
#else
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    auto n = intervals.size();
    int start = -1, end = -1;
    for (int i = 0; i < n; ++i) {
        if (start == -1 && newInterval.start <= intervals[i].end) {
            start = i;
        }
        if (end == -1 && newInterval.end  <= intervals[i].end) {
            end = i;
        }
        if(end != -1 && start != -1) break;
    }
    if (start == -1) {
        intervals.push_back(newInterval);
        return intervals;
    }
    if (start == end && newInterval.end < intervals[start].start) {
        intervals.insert(intervals.begin()+start, newInterval);
        return intervals;
    }
    intervals[start].start = min(intervals[start].start, newInterval.start);
    if (end == -1) {
        end = static_cast<int>(n);
        intervals[start].end = newInterval.end;
    } else if (newInterval.end >= intervals[end].start) {
        intervals[start].end = intervals[end].end;
        ++end;
    } else {
        intervals[start].end = max(newInterval.end, intervals[end-1].end);
    }
    intervals.erase(intervals.begin()+start+1, intervals.begin()+end);
    return intervals;
}
#endif
