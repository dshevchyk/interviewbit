////
//  MinStack.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 09.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//


#include "MinStack.hpp"

MinStack::MinStack() {
    //workaround for interviewbit side
    mins = stack<int>();
    st = stack<int>();
}

void MinStack::push(int x) {
    if (mins.empty() || mins.top() >= x) {
        mins.push(x);
    }
    st.push(x);
}

void MinStack::pop() {
    if (st.empty()) {
        return;
    }
    if (!mins.empty() && st.top() == mins.top()) {
        mins.pop();
    }
    st.pop();
}

int MinStack::top() {
    if (st.empty()) {
        return -1;
    }
    return st.top();
}

int MinStack::getMin() {
    if (mins.empty()) {
        return -1;
    }
    return mins.top();
}
