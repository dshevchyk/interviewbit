////
//  RotateList.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "RotateList.hpp"
#include "ListNode.h"

namespace {
    
int len(ListNode *A) {
    int count = 0;
    while (A) {
        count++;
        A = A->next;
    }
    return count;
}
    
ListNode *getByIndex(ListNode *A, int i) {
    int count = 0;
    while (count < i) {
        count++;
        A = A->next;
    }
    return A;
}

}

ListNode *Solution::rotateRight(ListNode *A, int B) {
    auto length = len(A);
    B = B % length;
    
    if (!B || ! length) {
        return A;
    } else if (B < 0) {
        B = length - B;
    }
    
    auto oldLast = getByIndex(A, length - 1);
    auto preRoot = getByIndex(A, length - B - 1);
    auto root = preRoot->next;
    preRoot->next = nullptr;
    oldLast->next = A;
    return root;
    
}
