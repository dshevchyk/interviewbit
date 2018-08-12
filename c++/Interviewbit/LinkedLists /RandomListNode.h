////
//  Header.h
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 12.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#ifndef Header_h
#define Header_h

struct RandomListNode {
     int label;
     RandomListNode *next, *random;
     RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

#endif /* Header_h */
