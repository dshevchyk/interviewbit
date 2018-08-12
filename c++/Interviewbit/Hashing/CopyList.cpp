////
//  CopyList.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "CopyList.hpp"
#include "RandomListNode.h"

RandomListNode *Solution::copyRandomList(RandomListNode *A) {
    if (A == nullptr) {
        return nullptr;
    }
    RandomListNode *ACopy = nullptr;
    RandomListNode *currentCopy = nullptr;
    RandomListNode *current = A;

    while (current != nullptr) {
        currentCopy = new RandomListNode(current->label);
        currentCopy->next = current->next;
        current->next = currentCopy;
        current = currentCopy->next;
    }
    current = A;
    while (current != nullptr)
    {
        currentCopy = current->next;
        if (current->random)
            currentCopy->random = current->random->next;
        current = currentCopy ->next;
    }
    current = A;
    ACopy = A->next;
    while (current != nullptr)
    {
        currentCopy = current->next;
        current->next = currentCopy->next;
        current = current->next;
        if (current)
            currentCopy->next = current->next;
    }
    return ACopy;
}
