//
//  AddTwoNumbersAsLists.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "AddTwoNumbersAsLists.hpp"
#include "ListNode.h"

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode root(-1);
    auto current = &root;
    int carry = 0;
    while (A || B || carry) {
        int res = carry;
        if (A) {
            res += A->val;
            A = A->next;
        }
        if (B) {
            res += B->val;
            B = B->next;
        }
        current->next = new ListNode(res % 10);
        current = current->next;
        carry = res / 10;
    }
    return root.next;
}
