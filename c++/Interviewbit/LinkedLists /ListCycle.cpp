//
//  ListCycle.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ListCycle.hpp"
#include "ListNode.h"

ListNode* Solution::detectCycle(ListNode* A) {
    if (!A) {
        return nullptr;
    }
    auto slow = A;
    auto fast = A;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    if (!fast || !fast->next) {
        return nullptr;
    }
    fast = A;
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
