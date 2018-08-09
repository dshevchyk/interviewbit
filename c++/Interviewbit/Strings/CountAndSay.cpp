//
//  CountAndSay.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "CountAndSay.hpp"

using std::to_string;

string Solution::countAndSay(int A) {
    string res = "1";
    for (int i = 1; i < A; ++i) {
        string prev = res;
        res.clear();
        for (int j = 0; j < prev.size(); ++j) {
            int count =1;
            while (j+1 < prev.size() && prev[j] == prev[j+1]) {
                ++j;
                ++count;
            }
            res += to_string(count);
            res.push_back(prev[j]);
        }
    }
    return res;
}
