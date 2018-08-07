//
//  MergeTwoSortedLists.cpp
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MergeTwoSortedLists.hpp"
#include "ListNode.h"

ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
     ListNode root(-1);
     ListNode *current  = &root;
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
