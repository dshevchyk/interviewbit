//
//  PalindromeString.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 29.07.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "PalindromeString.hpp"

int Solution::isPalindrome(string A) {
    int i = 0;
    auto j = A.size() - 1;
    while (i<j) {
        while (i  <j && !isalnum(A[i])) i++;
        while (i < j && !isalnum(A[j])) j--;
        if (tolower(A[i]) != tolower(A[j])) return 0;
        i++;
        j--;
    }
    return 1;
}
