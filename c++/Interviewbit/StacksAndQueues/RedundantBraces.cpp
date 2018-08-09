////
//  RedundantBraces.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "RedundantBraces.hpp"
#include <stack>

using std::stack;

int Solution::braces(string A) {
    stack<int> st;
    for (auto c : A) {
        switch (c) {
            case ')': {
                int count = 0;
                while (!st.empty() && st.top() != '(') {
                    st.pop();
                    ++count;
                }
                if (count < 3) {
                    return 1;
                }
                if (!st.empty()) {
                    st.pop();
                }
                st.push('#');
            }
            break;
            default: {
                st.push(c);
            }
        }
    }
    return 0;
}
