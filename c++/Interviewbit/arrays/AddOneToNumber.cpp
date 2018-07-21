//
//  AddOneToNumber.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "AddOneToNumber.hpp"

vector<int> Solution::plusOne(vector<int> &A) {
    if (A.empty()) return {1};
    static constexpr int numSystem = 10;
    int carry = 1;
    auto iter = A.rbegin();
    while (iter != A.rend()) {
        *iter += carry;
        carry = *iter / numSystem;
        *(iter++) %= numSystem;
        if(carry == 0) break;
    }
    if (carry != 0) {
        A.insert(A.begin(), carry);
    }
    auto start = A.begin();
    while (distance(start, A.end()) > 1 && *start == 0) ++start;
    return vector<int>(start, A.end());
}
