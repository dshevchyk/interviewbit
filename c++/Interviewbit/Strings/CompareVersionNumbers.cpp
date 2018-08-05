//
//  CompareVersionNumbers.cpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "CompareVersionNumbers.hpp"

namespace {
    
int compare(const string &A, const string &B) {
    auto aBegin = A.begin();
    auto bBegin = B.begin();
    while(aBegin != A.end() && *aBegin == '0') ++aBegin;
    while(bBegin != B.end() && *bBegin == '0') ++bBegin;
    auto sizeA = distance(aBegin, A.end());
    auto sizeB = distance(bBegin, B.end());
    if (sizeA != sizeB) {
        return sizeA > sizeB ? 1: -1;
    }
    while(aBegin != A.end() && *aBegin == *bBegin) {
        ++aBegin;
        ++bBegin;
    }
    return aBegin == A.end() ? 0 : (*aBegin > *bBegin ? 1 : -1);
}
    
}

int Solution::compareVersion(string A, string B) {
    int i = 0;
    int j = 0;
    auto sizeA = A.size();
    auto sizeB = B.size();
    
    while (i < sizeA || j < sizeB) {
        string numA;
        string numB;
        while (i < sizeA && A[i] != '.') {
            numA += A[i];
            i++;
        }
        
        while (j < sizeB && B[j] != '.') {
            numB += B[j];
            j++;
        }
        int compera = compare(numA, numB);
        if (compera != 0) return compera;
        
        i++;
        j++;
    }
    
    return 0;
}
