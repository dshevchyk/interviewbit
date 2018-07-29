//
//  RomanToInteger.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "RomanToInteger.hpp"

int Solution::romanToInt(string A) {
    auto romanToIntSymb = [](char r) {
        switch (r) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            dafault: return 0;
        }
        return 0;
    };
    int result = 0;
    auto n = A.length();
    A += "#";
    for (auto i = 0; i<n; ++i)
    {
        if (romanToIntSymb(A[i]) < romanToIntSymb(A[i+1]))
            result -= romanToIntSymb(A[i]);
        else
            result += romanToIntSymb(A[i]);
    }
    return result;
}
