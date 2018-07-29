//
//  LargestCoprimeDivisor.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "LargestCoprimeDivisor.hpp"

int gcd(int A, int B) {
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int Solution::cpFact(int A, int B) {
    while (gcd(A,B) != 1){
        A = A / gcd(A,B);
    }
    return A;
}
