//
//  ExcelColumnNumber.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ExcelColumnNumber.hpp"

int Solution::titleToNumber(string A) {
    int res = 0;
    int decimal = 0;
    for (auto it = A.begin(); it != A.end(); ++it) {
        res *= 26;
        res += *it - 'A'+1;
    }
    return res;
}
