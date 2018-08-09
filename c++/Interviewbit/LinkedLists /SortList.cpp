//
//  SortList.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "SortList.hpp"
#include "ListNode.h"
namespace {
    
ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode root(-1);
    ListNode* current  = &root;
    while (A || B) {
        auto nextEl = !A ? &B :
        (!B ? &A :
         (A->val < B->val ? &A : &B));
        current->next = *nextEl;
        *nextEl = (*nextEl)->next;
        current = current->next;
    }
    return root.next;
}
    
}
ListNode* Solution::sortList(ListNode* A) {
    if (!A || !A->next) {
        return A;
    }
    auto slow = A;
    auto fast = A->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    auto A2 = slow->next;
    slow->next = nullptr;
    A = sortList(A);
    A2 = sortList(A2);
    return mergeTwoLists(A, A2);
}
