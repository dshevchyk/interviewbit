//
//  ListNode.h
//  Interviewbit
//
//  Created by Димаська on 07.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#ifndef ListNode_h
#define ListNode_h

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

#endif /* ListNode_h */
