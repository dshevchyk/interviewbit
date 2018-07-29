//
//  ReverseTheString.cpp
//  Interviewbit
//
//  Created by Димаська on 29.07.2018.
//  Copyright © 2018 Димаська. All rights reserved.
//

#include "ReverseTheString.hpp"

using std::reverse;

string Solution::reverseWords(string &A) {
    string res;
    for (int i = 0; i < A.size(); ++i) {
        int end = i;
        while (end < A.size() && A[end] != ' ') ++end;
        if(end == i) continue;
        if (!res.empty()) res += " ";
        string word=string(A.begin() + i, A.begin() + end);
        reverse(word.begin(), word.end());
        res += word;
    }
    reverse(res.begin(), res.end());
    return res;
}
