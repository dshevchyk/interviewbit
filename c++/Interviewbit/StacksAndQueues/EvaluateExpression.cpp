////
//  EvaluateExpression.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "EvaluateExpression.hpp"
#include <stack>
#include <functional>
#include <unordered_map>

using std::stack;
using std::function;
using std::unordered_map;
using std::make_pair;

int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    const unordered_map<string, function<int(int, int)>> operations {
        { make_pair("+", [](int a, int b) { return a + b; } ) },
        { make_pair("*", [](int a, int b) { return a * b; } )  },
        { make_pair("/", [](int a, int b) { return a / b; } )  },
        { make_pair("-", [](int a, int b) { return a - b; } )  }
    };
    for (const auto &ai : A) {
        auto it  = operations.find(ai);
        
        if (it == operations.end()) {
            st.push(atoi(ai.c_str()));
        } else {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            auto evaluate = it->second;
            st.push(evaluate(second,first));
        }
    }
    
    return st.top();
}
