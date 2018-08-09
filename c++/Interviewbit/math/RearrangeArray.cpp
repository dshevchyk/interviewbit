//
//  RearrangeArray.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 23.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "RearrangeArray.hpp"

void Solution::arrange(vector<int> &A) {
    for (int i = 0; i < A.size(); ++i) {
        A[i] += (A[A[i]] % A.size()) * A.size();
    }
    for (int i = 0; i < A.size(); ++i) {
        A[i] /= A.size();
    }
}
