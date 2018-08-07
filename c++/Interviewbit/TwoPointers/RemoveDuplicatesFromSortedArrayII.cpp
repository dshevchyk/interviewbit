//
//  RemoveDuplicatesFromSortedArrayII.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//
#include "RemoveDuplicatesFromSortedArrayII.hpp"

int Solution1::removeDuplicates(vector<int> &A) {
    int count = 0;
    for (int n : A) {
        if (count < 2 || n > A[count-2]) {
            A[count++] = n;
        }
    }
    return count;
}
