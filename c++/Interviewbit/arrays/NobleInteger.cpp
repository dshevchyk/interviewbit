//
//  NobleInteger.cpp
//  Interviewbit
//
//  Created by Димаська on 22.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "NobleInteger.hpp"

int Solution::solve(vector<int> &A) {
    auto n = A.size();
    int ans = -1;
    
    if (!n) return ans;
    
    sort(A.begin(), A.end());
    
    for (int i = 0; i < A.size();) {
        while (i+1 < n && A[i] == A[i+1]) {
            i++;
        }
        if (n - (i+1) == A[i]) {
            ans = 1;
            break;
        }
        i++;
    }
    
    return ans;
}
