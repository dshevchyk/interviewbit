////
//  RemoveDuplicatesFromSortedList.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "RemoveDuplicatesFromSortedList.hpp"
#include "ListNode.h"

ListNode *Solution::deleteDuplicates(ListNode *A) {
    if (A == nullptr) {
        return A;
    }
    
    auto curr = A;
    
    while (curr->next != nullptr) {
        auto temp = curr->next;
        while (curr->val == temp->val) {
            if (temp->next == nullptr) {
                curr->next = nullptr;
                return A;
            }
            temp = temp->next;
        }
        curr->next = temp;
        curr = temp;
    }
    
    return A;
}
