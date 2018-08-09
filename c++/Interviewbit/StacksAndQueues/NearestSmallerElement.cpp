////
//  NearestSmallerElement.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "NearestSmallerElement.hpp"
#include <stack>

using std::stack;

vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans;
    ans.reserve(A.size());
    stack<int> st;
    for (auto ai : A) {
        while (!st.empty() && st.top() >= ai) {
            st.pop();
        }
        if (!st.empty()) {
            ans.push_back(st.top());
        } else {
            ans.push_back(-1);
        }
        st.push(ai);
    }
    return ans;
}
