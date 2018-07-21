//
//  MinStepsInInfinityGrid.cpp
//  Interviewbit
//
//  Created by Димаська on 21.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "MinStepsInInfinityGrid.hpp"

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.empty()) return 0;
    int steps = 0;
    int prevX = A[0];
    int prevY = B[0];
    for(int i = 1; i < A.size(); ++ i) {
        steps += std::min(abs(A[i] - prevX), abs(B[i] - prevY));
        steps += abs(A[i] - B[i]);
        prevX = A[i];
        prevY = B[i];
    }
    return steps;
}
