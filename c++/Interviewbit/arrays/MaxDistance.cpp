//
//  MaxDistance.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MaxDistance.hpp"

using std::pair;
using std::make_pair;
using std::max;

int Solution::maximumGap(const vector<int> &A) {
    if(A.empty()) return 0;
    vector<pair<int, int>> sortedHash;
    sortedHash.reserve(A.size());
    for (int i = 0; i < A.size(); ++i) {
        sortedHash.push_back(make_pair(A[i], i));
    }
    sort(sortedHash.begin(), sortedHash.end());
    int ans = 0;
    int rmax = sortedHash.back().second;
    for (int i = sortedHash.size() - 2; i >= 0; --i) {
        ans = max(ans, rmax - sortedHash[i].second);
        rmax = max(rmax, sortedHash[i].second);
    }
    return ans;
}
