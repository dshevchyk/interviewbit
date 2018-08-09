//
//  SwapListNodesInPairs.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SwapListNodesInPairs.hpp"
#include "ListNode.h"

ListNode *Solution::swapPairs(ListNode *A) {
    if (!A || !A->next) {
        return A;
    }
    auto root = A->next;
    ListNode *preA = nullptr;
    while (A && A->next) {
        auto b = A->next;
        auto nextA = b->next;
        if (preA) preA->next = b;
        b->next = A;
        A->next = nextA;
        preA = A;
        A = nextA;
    }
    return root;
}
