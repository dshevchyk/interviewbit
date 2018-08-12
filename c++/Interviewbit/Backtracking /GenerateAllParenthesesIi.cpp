////
//  GenerateAllParenthesesIi.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "GenerateAllParenthesesIi.hpp"
namespace {
    
void helper(int openCount, int closeCount, string &current, vector<string> &res) {
    if (openCount > closeCount || openCount < 0 || closeCount < 0) {
        return;
    }
    if (openCount == closeCount && openCount == 0) {
        res.push_back(current);
    }
    
    current.push_back('(');
    helper(openCount - 1, closeCount, current, res);
    current.pop_back();
    
    current.push_back(')');
    helper(openCount, closeCount - 1, current, res);
    current.pop_back();
}
    
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    string current;
    helper(A, A, current, res);
    return res;
}
