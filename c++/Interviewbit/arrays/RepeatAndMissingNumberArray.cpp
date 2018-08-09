//
//  RepeatAndMissingNumberArray.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "RepeatAndMissingNumberArray.hpp"

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    //A[0]2 + A[1]2 + ... - missing2 + repeating2
    //A[0] + A[1] + ... - missing + repeating
    long long squareDiffXY = 0;//repeating2 - missing2
    long long diffXY = 0;//repeating - missing
    for (int i = 0; i < A.size(); ++i) {
        long long currentExpected = i + 1;
        long long current = A[i];
        squareDiffXY += current*current - currentExpected*currentExpected;//repeating2 - missing2
        diffXY += current - currentExpected;//repeating - missing
    }
    if (diffXY == 0) return {};
    auto sumXY = squareDiffXY / diffXY;
    int repeating = static_cast<int>((sumXY + diffXY) / 2);
    int missing = static_cast<int>(sumXY - repeating);
    return vector<int>{repeating, missing};
}
