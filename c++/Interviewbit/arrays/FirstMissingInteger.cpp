//
//  FirstMissingInteger.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "FirstMissingInteger.hpp"

using std::swap;

int Solution::firstMissingPositive(vector<int> &A) {
    for (int i = 0; i < A.size(); ++i) {
        while (A[i] > 0 && A[i] <= A.size() && A[A[i] - 1] != A[i]) {
            swap(A[i], A[A[i] - 1]);
        }
    }
    
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] != i + 1) {
            return i + 1;
        }
    }
    
    return static_cast<int>(A.size()) + 1;
}
