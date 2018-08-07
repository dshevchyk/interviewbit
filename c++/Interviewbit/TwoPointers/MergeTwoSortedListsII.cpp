//
//  MergeTwoSortedListsII.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MergeTwoSortedListsII.hpp"

void Solution::merge(vector<int> &A, vector<int> &B) {
    const auto m = A.size();
    const auto n = B.size();
    int a=m-1;
    int b=n-1;
    int i= m + n - 1;
    A.resize(m + n);
    while (a >= 0 && b >= 0) {
        if (A[a] > B[b]) {
            A[i--] = A[a--];
        }
        else {
            A[i--] = B[b--];
        }
    }
    while ( b >= 0) {
        A[i--] = B[b--];
    }
}
