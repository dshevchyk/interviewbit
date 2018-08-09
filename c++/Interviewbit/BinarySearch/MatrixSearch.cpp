//
//  MatrixSearch.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "MatrixSearch.hpp"

using std::make_pair;
using std::pair;

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    if (A.empty() || A.front().empty()) return 0;
    auto n = A.size();
    auto m = A.front().size();
    auto indexToMatrix = [m](vector<int>::size_type index) {
        return make_pair(index / m, index % m);
    };
    decltype(m) begin = 0;
    auto end = n * m;
    while(begin < end) {
        auto midIndex = (end - begin) / 2;
        auto mid = indexToMatrix(midIndex);
        auto midVal = A[mid.first][mid.second];
        if (midVal == B) return 1;
        else if (midVal < B) {
            begin = midIndex + 1;
        } else {
            end = midIndex;
        }
    }
    return 0;
}
