//
//  PrimeSum.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "PrimeSum.hpp"
#include <cmath>

using std::sqrt;

vector<int> Solution::primesum(int A) {
    vector<bool> isPrime(A, true);
    
    for (int i = 2; i <= sqrt(A); i++){
        if (isPrime[i]){
            for(int j = 2; i*j <= A; j++){
                isPrime[i*j] = false;
            }
        }
    }
    
    for (int i = 2; i < A; i++){
        if (isPrime[i] && isPrime[A - i]){
            return {i, A - i};
        }
    }
    return {};
}
