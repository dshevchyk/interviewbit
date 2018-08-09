//
//  KthRowOfPascalsTriangle.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 22.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "KthRowOfPascalsTriangle.hpp"

vector<int> Solution::getRow(int A) {
    vector<int> res(A+1, 0);
    res[0]=1;
    for (int i = 0; i <= A ; ++i) {
        for (int j = i; j > 0; --j) {
            res[j] = res[j] + res[j-1];
        }
    }
    return res;
}
