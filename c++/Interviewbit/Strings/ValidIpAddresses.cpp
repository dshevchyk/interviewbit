//
//  ValidIpAddresses.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "ValidIpAddresses.hpp"

namespace {
    
static constexpr int maxNumbLength = 3;
static constexpr int maxNumbValue = 255;
static constexpr int ipSize = 4;
    
void dfs (const string& A,
          int start,
          const int stepsLeft,
          const string& ip,
          vector<string>& result) {
    const auto n = A.size();
    if (start == n && stepsLeft == 0){
        result.push_back(ip);
        return;
    }
    int num = 0;
    string nextIp = ip.empty() ? ip : ip + ".";
    for (int i = start; i < start + maxNumbLength && i < n; i++) {
        num = num * 10 + (A[i] - '0');
        if (num <= maxNumbValue) {
            nextIp += A[i];
            dfs(A, i + 1, stepsLeft - 1, nextIp, result);
        }
        if (num >= maxNumbValue || num < 1) {
            break;
        }
    }
}

}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> results;
    string ip;
    dfs(A, 0, ipSize, ip, results);
    return results;
}
