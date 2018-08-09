////
//  MinStack.hpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#ifndef MinStack_hpp
#define MinStack_hpp

#include <stack>

using std::stack;

class MinStack {
public:
    MinStack();
    void push(int x);
    void pop();
    int top();
    int getMin();
    
private:
    stack<int> mins;
    stack<int> st;
};


#endif /* MinStack_hpp */
