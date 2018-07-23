//
//  PalindromeInteger.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "PalindromeInteger.hpp"

int Solution::isPalindrome(int A) {
    if (A < 0) return false;
    long long AReverse = 0;
    int ACopy = A;
    static const int numericSystem = 10;
    int maxValue = numeric_limits<int>::max() / 10;
    while (ACopy) {
        if(AReverse > maxValue) return false;
        AReverse *= numericSystem;
        AReverse += ACopy % numericSystem;
        ACopy /= numericSystem;
    }
    return AReverse == A;
}
