//
//  GreatestCommonDivisor.cpp
//  Interviewbit
//
//  Created by Димаська on 23.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "GreatestCommonDivisor.hpp"

int Solution::gcd(int A, int B) {
    while (B) {
        auto temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}
