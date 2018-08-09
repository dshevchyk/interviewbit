//
//  ZigzagString.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ZigzagString.hpp"

#include <vector>

using std::vector;

string Solution::convert(string A, int B) {
    if (B < 2) return A;
    vector<string> lines(B, string());
    int currentRow = 0;
    int direction = 1;
    for (int i = 0; i < A.size(); ++i) {
        lines[currentRow].push_back(A[i]);
        currentRow += direction;
        if(currentRow < 0 || currentRow >= B) {
            direction *= -1;
            currentRow += 2 * direction;
        }
    }
    string res;
    for (const auto& line: lines) {
        res += line;
    }
    return res;
}
