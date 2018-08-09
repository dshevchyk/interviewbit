////
//  SimplifyDirectoryPath.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "SimplifyDirectoryPath.hpp"
#include <deque>
#include <sstream>

using std::deque;
using std::stringstream;

string Solution::simplifyPath(string A) {
    string res;
    string tmp;
    deque<string> stk;
    stringstream ss(A);
    while (getline(ss, tmp, '/')) {
        if (tmp == "" || tmp == ".") {
            continue;
        }
        if (tmp == ".." && !stk.empty()) {
            stk.pop_back();
        } else if (tmp != "..") {
            stk.push_back(tmp);
        }
    }
    for (auto str : stk) {
        res += "/" + str;
    }
    return res.empty() ? "/" : res;
}
