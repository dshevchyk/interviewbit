//
//  RemoveElementFromArray.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "RemoveElementFromArray.hpp"

int Solution::removeElement(vector<int> &A, int B) {
    int count = 0;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == B) {
            continue;
        }
        A[count++] = A[i];
    }
    return count;
}
