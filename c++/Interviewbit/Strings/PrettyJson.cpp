//
//  PrettyJson.cpp
//  Interviewbit
//
//  Created by Shevchyk Dmytro on 05.08.2018.
//  Copyright © 2018 Shevchyk Dmytro. All rights reserved.
//

#include "PrettyJson.hpp"

#include <algorithm>

using std::max;

vector<string> Solution::prettyJSON(string A) {
    vector<string> result;
    const char space = ' ';
    const auto n = A.size();
    int bracesCount = 0;
    string currentLine;
    A.erase(remove(A.begin(), A.end(), space), A.end());
    auto insertLineCallback = [&result, &currentLine, &bracesCount] (int bracesIncrement) {
        result.push_back(currentLine);
        bracesCount = max(0, bracesCount + bracesIncrement);
        currentLine = string(bracesCount, '\t');
    };
    for (int i = 0; i < n; ++i) {
        currentLine.push_back(A[i]);
        int nextI = i + 1;
        switch (A[i]) {
            case '{':
            case '[': {
                insertLineCallback(1);
            }
            break;
            case '}':
            case ']': {
                if (nextI == n || A[nextI] != ',') {
                    insertLineCallback(-1);
                }
            }
            break;
            case ',': {
                insertLineCallback(0);
            }
            break;
            case ':': {
                if (A[nextI] == '{' || A[nextI] == '[') {
                    insertLineCallback(0);
                }
            }
            break;
            default : {
                if (nextI < n && (A[nextI] == '}' || A[nextI] == ']')) {
                    insertLineCallback(-1);
                }
            }
        }
    }
    return result;
}

