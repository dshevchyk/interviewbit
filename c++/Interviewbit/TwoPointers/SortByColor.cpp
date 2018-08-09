//
//  SortByColor.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SortByColor.hpp"
#include <array>

using std::array;

void Solution::sortColors(vector<int> &A) {
    array<int, 3> counter{0, 0, 0};
    for (auto it = A.begin(); it != A.end(); ++it) {
        ++counter[*it];
    }
    for (int i = 0, shift = 0; i < counter.size(); ++i) {
        fill_n(A.begin() + shift, counter[i], i);
        shift += counter[i];
    }
}
