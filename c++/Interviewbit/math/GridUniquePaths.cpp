//
//  GridUniquePaths.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "GridUniquePaths.hpp"

int Solution::uniquePaths(int A, int B) {
    //C ((n-1), (m+n-2)) = (m+n-2)!/(n-1)!(m-1)!; = (n*(n+1)...(n+m-2) / (1*2...*m-1)
    long long res = 1;
    int shift = A - 1;
    for (int i = 1; i < B; ++i) {
        res *= (shift+i);
        res /= i;
    }
    return static_cast<int>(res);
}
