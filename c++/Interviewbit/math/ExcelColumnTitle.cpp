//
//  ExcelColumnTitle.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ExcelColumnTitle.hpp"

string Solution::convertToTitle(int A) {
    static constexpr int BASE = 26;
    
    string res;
    while (A != 0) {
        A -= 1;
        res.push_back((char) (A % BASE + 'A'));
        A /= BASE;
    }
    reverse(res.begin(), res.end());
    return res;
}
