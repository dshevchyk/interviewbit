////
//  PartitionList.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "PartitionList.hpp"
#include "ListNode.h"

ListNode *Solution::partition(ListNode *A, int B) {
    ListNode *current = A;
    ListNode *previous = nullptr;
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    while (current) {
        if (current->val < B) {
            if(previous) {
                previous->next = current->next;
            } else {
                A = current->next;
            }
            if (!head) {
                head = current;
                tail = current;
            } else {
                tail->next = current;
                tail = current;
            }
            current->next = nullptr;
            if (previous) {
                current = previous->next;
            }
            else {
                current = A;
            }
        }
        else {
            previous = current;
            current = current->next;
        }
    }
    if(tail) {
        tail->next=A;
    }
    else {
        head = A;
    }
    return head;
}
