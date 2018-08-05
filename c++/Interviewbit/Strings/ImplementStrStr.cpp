//
//  ImplementStrStr.cpp
//  Interviewbit
//
//  Created by Димаська on 05.08.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ImplementStrStr.hpp"
namespace {
vector<int> kmpProcess(const string& B) {
    const auto n = B.size();
    vector<int> kmp(n, 0);
    int len = 0, i = 1;
    while (i < n) {
        if (B[i] == B[len]) {
            kmp[i++] = ++len;
        } else if (len) {
            len = kmp[len -1];
        } else {
            i++;
        }
    }
    return kmp;
}
}

int Solution::strStr(const string A, const string B) {
    const auto kmp = kmpProcess(B);
    const auto n = A.size();
    const auto m = B.size();
    int indexB = 0;
    int indexA = 0;
    while (indexA < n) {
        if(A[indexA] == B[indexB]) {
            ++indexA;
            ++indexB;
            if (indexB == m) {
                return indexA - indexB;
            }
        } else if(indexB) {
            indexB = kmp[indexB - 1];
        } else {
            ++indexA;
        }
    }
    return -1;
}
