//
//  main.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include <iostream>
#include "MergeTwoSortedLists.hpp"


using std::dynamic_pointer_cast;

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode *A = new ListNode(0);
    A->next = new ListNode(2);
    A->next->next = new ListNode(4);
    A->next->next->next = new ListNode(6);
    A->next->next->next->next = new ListNode(8);
    ListNode *B = new ListNode(1);
    B->next = new ListNode(3);
    B->next->next = new ListNode(5);
    B->next->next->next = new ListNode(7);
    B->next->next->next->next = new ListNode(9);
    s.mergeTwoLists(A, B);
    return 0;
}
