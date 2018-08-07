//
//  RemoveDuplicatesFromSortedArray.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "RemoveDuplicatesFromSortedArray.hpp"

int Solution::removeDuplicates(vector<int> &A) {
    if (A.empty()) {
        return 0;
    }
    int count = 1;
    for (int i = 1; i < A.size(); ++i){
        if (A[i] != A[count - 1]) {
            A[count++] = A[i];
        }
    }
    A.erase(A.begin() + count, A.end());
    return count;
}
