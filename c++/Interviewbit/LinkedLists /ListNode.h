//
//  ListNode.h
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 07.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#ifndef ListNode_h
#define ListNode_h

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

#endif /* ListNode_h */
