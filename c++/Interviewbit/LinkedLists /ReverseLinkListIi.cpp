////
//  ReverseLinkListIi.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "ReverseLinkListIi.hpp"
#include "ListNode.h"


ListNode *getByIndex(ListNode *A, int index) {
    if (index < 0) {
        return nullptr;
    }
    while (index > 0) {
        A = A->next;
        --index;
    }
    return A;
}
void reverse(ListNode *A, ListNode *B) {
    ListNode *prev = nullptr;
    while (A != B) {
        auto temp = A->next;
        A->next = prev;
        prev = A;
        A = temp;
    }
}
ListNode *Solution::reverseBetween(ListNode *A, int B, int C) {
    auto preLeft = getByIndex(A, B - 2);
    auto left = preLeft ? preLeft->next : A;
    auto right = getByIndex(left, C - B);
    auto postRight = right->next;
    auto root = preLeft ? A : right;
    reverse(left, postRight);
    if (preLeft) {
        preLeft->next = right;
    }
    left->next = postRight;
    return root;
}
