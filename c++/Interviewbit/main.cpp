//
//  main.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include <iostream>
#include "ListNode.h"
#include "SortList.hpp"


using std::dynamic_pointer_cast;

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode *A = new ListNode(0);
    A->next = new ListNode(2);
    A->next->next = new ListNode(4);
    A->next->next->next = new ListNode(6);
    A->next->next->next->next = new ListNode(8);
    s.sortList(A);
    return 0;
}
