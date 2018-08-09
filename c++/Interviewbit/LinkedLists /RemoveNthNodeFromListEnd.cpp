//
//  RemoveNthNodeFromListEnd.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "RemoveNthNodeFromListEnd.hpp"
#include "ListNode.h"

//namespace {
//
//int len(ListNode* A) {
//    int count = 0;
//    while (A) {
//        A = A->next;
//        ++count;
//    }
//    return count;
//}
//
//}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
//    if (!A) {
//        return nullptr;
//    }
//    auto root = A;
//    int length = len(A);
//    if (length <= B) {
//        auto item = A->next;
//        delete A;
//        return item;
//    }
//    int count  = 1;
//    while (count < length - B) {
//        A = A->next;
//        ++count;
//    }
//    ListNode* preItem = A;
//    ListNode* item = preItem->next;
//    preItem->next = item->next;
//    delete item;
//    return root;
    
    if (!A) {
        return nullptr;
    }
    ListNode root(-1);
    root.next = A;
    
    ListNode *slow = &root, *fast = &root;
    
    for (int i = 0; i < B && fast; i++) {
        fast = fast->next;
    }
    if (!fast) {
        ListNode *itemToDelete = root.next;
        root.next = itemToDelete->next;
        delete itemToDelete;
    } else {
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *itemToDelete = slow->next;
        slow->next = slow->next->next;
        delete itemToDelete;
    }
    return root.next;
}
